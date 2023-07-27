// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub17(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+104586,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+104587,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+104588,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104589,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104590,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+104591,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+104592,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104593,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_9_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104594,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+104595,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+104596,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+104597,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104598,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104599,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+104600,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+104601,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104602,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104603,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+104604,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+104605,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104606,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104607,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+104608,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+104609,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104610,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104611,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+104612,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+104613,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104614,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104615,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+104616,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+104617,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104618,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104619,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+104620,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+104621,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104622,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104623,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+104624,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+104625,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104626,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104627,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+104628,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+104629,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104630,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104631,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+104632,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+104633,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104634,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104635,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+104636,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+104637,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104638,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104639,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+104640,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+104641,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104642,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104643,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+104644,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+104645,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104646,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104647,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+104648,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+104649,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104650,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104651,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+104652,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+104653,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104654,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104655,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+104656,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+104657,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104658,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_10_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104659,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+104660,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+104661,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+104662,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104663,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104664,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+104665,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+104666,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104667,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104668,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+104669,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+104670,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104671,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104672,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+104673,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+104674,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104675,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104676,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+104677,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+104678,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104679,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104680,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+104681,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+104682,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104683,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104684,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+104685,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+104686,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104687,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104688,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+104689,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+104690,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104691,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104692,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+104693,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+104694,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104695,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104696,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+104697,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+104698,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104699,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104700,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+104701,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+104702,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104703,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104704,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+104705,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+104706,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104707,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104708,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+104709,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+104710,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104711,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104712,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+104713,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+104714,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104715,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104716,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+104717,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+104718,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104719,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104720,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+104721,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+104722,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104723,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_11_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104724,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+104725,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+104726,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+104727,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104728,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104729,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+104730,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+104731,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104732,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104733,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+104734,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+104735,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104736,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104737,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+104738,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+104739,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104740,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104741,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+104742,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+104743,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104744,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104745,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+104746,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+104747,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104748,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104749,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+104750,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+104751,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104752,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104753,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+104754,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+104755,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104756,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104757,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+104758,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+104759,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104760,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104761,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+104762,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+104763,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104764,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104765,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+104766,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+104767,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104768,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104769,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+104770,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+104771,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104772,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104773,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+104774,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+104775,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104776,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104777,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+104778,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+104779,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104780,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104781,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+104782,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+104783,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104784,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104785,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+104786,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+104787,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104788,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_12_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104789,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+104790,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+104791,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+104792,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104793,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104794,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+104795,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+104796,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104797,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104798,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+104799,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+104800,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104801,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104802,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+104803,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+104804,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104805,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104806,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+104807,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+104808,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104809,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104810,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+104811,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+104812,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104813,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104814,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+104815,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+104816,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104817,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104818,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+104819,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+104820,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104821,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104822,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+104823,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+104824,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104825,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104826,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+104827,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+104828,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104829,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104830,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+104831,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+104832,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104833,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104834,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+104835,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+104836,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104837,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104838,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+104839,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+104840,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104841,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104842,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+104843,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+104844,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104845,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104846,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+104847,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+104848,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104849,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104850,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+104851,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+104852,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104853,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_13_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104854,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+104855,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+104856,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+104857,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104858,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104859,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+104860,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+104861,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104862,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104863,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+104864,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+104865,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104866,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104867,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+104868,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+104869,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104870,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104871,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+104872,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+104873,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104874,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104875,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+104876,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+104877,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104878,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104879,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+104880,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+104881,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104882,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104883,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+104884,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+104885,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104886,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104887,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+104888,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+104889,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104890,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104891,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+104892,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+104893,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104894,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104895,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+104896,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+104897,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104898,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104899,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+104900,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+104901,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104902,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104903,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+104904,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+104905,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104906,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104907,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+104908,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+104909,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104910,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104911,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+104912,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+104913,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104914,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104915,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+104916,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+104917,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104918,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_14.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_14_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104919,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+104920,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+104921,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+104922,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104923,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104924,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+104925,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+104926,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104927,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104928,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+104929,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+104930,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104931,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104932,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+104933,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+104934,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104935,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104936,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+104937,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+104938,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104939,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104940,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+104941,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+104942,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104943,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104944,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+104945,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+104946,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104947,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104948,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+104949,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+104950,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104951,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104952,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+104953,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+104954,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104955,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104956,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+104957,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+104958,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104959,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104960,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+104961,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+104962,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104963,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104964,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+104965,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+104966,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104967,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104968,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+104969,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+104970,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104971,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104972,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+104973,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+104974,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104975,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104976,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+104977,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+104978,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104979,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104980,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+104981,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+104982,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104983,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_8_15.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_8_15_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104984,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+104985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+104986,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+104987,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104988,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104989,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+104990,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+104991,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104992,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104993,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+104994,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+104995,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+104996,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+104997,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+104998,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+104999,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105000,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105001,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105002,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105003,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105004,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105005,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105006,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105007,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105008,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105009,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105010,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105011,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105012,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105013,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105014,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105015,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105016,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105017,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105018,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105019,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105020,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105021,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105022,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105023,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105024,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105025,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105026,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105027,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105028,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105029,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105030,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105031,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105032,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105033,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105034,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105035,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105036,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105037,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105038,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105039,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105040,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105041,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105042,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105043,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105044,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105045,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105046,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105047,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105048,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_0.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_0_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105049,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105050,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105051,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105052,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105053,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105054,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105055,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105056,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105057,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105058,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105059,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105060,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105061,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105062,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105063,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105064,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105065,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105066,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105067,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105068,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105069,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105070,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105071,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105072,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105073,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105074,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105075,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105076,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105077,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105078,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105079,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105080,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105081,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105082,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105083,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105084,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105085,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105086,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105087,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105088,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105089,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105090,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105091,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105092,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105093,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105094,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105095,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105096,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105097,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105098,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105099,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105100,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105101,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105102,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105103,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105104,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105105,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105106,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105107,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105108,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105109,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105110,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105111,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105112,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105113,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_1.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_1_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105114,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105115,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105116,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105117,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105118,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105119,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105120,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105121,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105122,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105123,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105124,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105125,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105126,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105127,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105128,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105129,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105130,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105131,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105132,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105133,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105134,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105135,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105136,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105137,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105138,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105139,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105140,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105141,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105142,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105143,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105144,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105145,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105146,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105147,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105148,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105149,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105150,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105151,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105152,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105153,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105154,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105155,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105156,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105157,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105158,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105159,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105160,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105161,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105162,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105163,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105164,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105165,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105166,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105167,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105168,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105169,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105170,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105171,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105172,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105173,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105174,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105175,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105176,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105177,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105178,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_2.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_2_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105179,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105180,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105181,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105182,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105183,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105184,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105185,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105186,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105187,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105188,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105189,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105190,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105191,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105192,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105193,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105194,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105195,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105196,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105197,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105198,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105199,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105200,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105201,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105202,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105203,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105204,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105205,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105206,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105207,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105208,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105209,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105210,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105211,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105212,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105213,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105214,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105215,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105216,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105217,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105218,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105219,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105220,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105221,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105222,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105223,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105224,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105225,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105226,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105227,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105228,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105229,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105230,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105231,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105232,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105233,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105234,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105235,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105236,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105237,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105238,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105239,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105240,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105241,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105242,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105243,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_3.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_3_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105244,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105245,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105246,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105247,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105248,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105249,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105250,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105251,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105252,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105253,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105254,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105255,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105256,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105257,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105258,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105259,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105260,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105261,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105262,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105263,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105264,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105265,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105266,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105267,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105268,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105269,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105270,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105271,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105272,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105273,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105274,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105275,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105276,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105277,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105278,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105279,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105280,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105281,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105282,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105283,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105284,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105285,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105286,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105287,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105288,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105289,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105290,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105291,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105292,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105293,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105294,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105295,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105296,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105297,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105298,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105299,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105300,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105301,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105302,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105303,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105304,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105305,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105306,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105307,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105308,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_4.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_4_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105309,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105310,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105311,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105312,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105313,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105314,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105315,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105316,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105317,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105318,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105319,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105320,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105321,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105322,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105323,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105324,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105325,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105326,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105327,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105328,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105329,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105330,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105331,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105332,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105333,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105334,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105335,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105336,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105337,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105338,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105339,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105340,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105341,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105342,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105343,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105344,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105345,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105346,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105347,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105348,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105349,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105351,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105352,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105353,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105354,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105355,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105356,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105357,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105358,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105359,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105360,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105361,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105362,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105363,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105364,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105365,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105366,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105367,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105368,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105369,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105370,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105371,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105372,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105373,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_5.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_5_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105374,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105376,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105377,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105378,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105379,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105380,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105381,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105382,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105383,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105384,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105385,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105386,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105387,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105388,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105389,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105390,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105391,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105392,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105393,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105394,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105395,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105396,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105397,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105398,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105399,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105400,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105401,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105402,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105403,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105404,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105405,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105406,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105407,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105408,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105409,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105410,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105411,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105412,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105413,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105414,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105415,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105416,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105417,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105418,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105419,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105420,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105421,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105422,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105423,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105424,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105425,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105426,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105427,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105428,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105429,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105430,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105431,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105432,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105433,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105434,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105435,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105436,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105437,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105438,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_6.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_6_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105439,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105440,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105441,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105442,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105443,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105444,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105445,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105446,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105447,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105448,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105449,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105450,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105451,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105452,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105453,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105454,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105455,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105456,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105457,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105458,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105459,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105460,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105461,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105462,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105463,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105464,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105465,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105466,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105467,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105468,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105469,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105470,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105471,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105472,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105473,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105474,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105475,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105476,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105477,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105478,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105479,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105480,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105481,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105482,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105483,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105484,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105485,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105486,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105487,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105488,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105489,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105490,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105491,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105492,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105493,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105494,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105495,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105496,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105497,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105498,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105499,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105500,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105501,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105502,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105503,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_7.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_7_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105504,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105505,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105506,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105507,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105508,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105509,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105510,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105511,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105512,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105513,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105514,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105515,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105516,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105517,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105518,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105519,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105520,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105521,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105522,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105523,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105524,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105525,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105526,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105527,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105528,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105529,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105530,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105531,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105532,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105533,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105534,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105535,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105536,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105537,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105538,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105539,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105540,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105541,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105542,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105543,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105544,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105545,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105546,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105547,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105548,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105549,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105550,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105551,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105552,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105553,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105554,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105555,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105556,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105557,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105558,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105559,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105560,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105561,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105562,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105563,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105564,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105565,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105566,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105567,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105568,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_8.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_8_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105569,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105570,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105571,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105572,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105573,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105574,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105575,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105576,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105577,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105578,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105579,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105580,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105581,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105582,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105583,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105584,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105585,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105586,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105587,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105588,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105589,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105590,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105591,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105592,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105593,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105594,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105595,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105596,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105597,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105598,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105599,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105600,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105601,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105602,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105603,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105604,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105605,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105606,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105607,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105608,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105609,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105610,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105611,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105612,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105613,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105614,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105615,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105616,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105617,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105618,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105619,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105620,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105621,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105622,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105623,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105624,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105625,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105626,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105627,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105628,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105629,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105630,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105631,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105632,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105633,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_9.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_9_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105634,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105635,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105636,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105637,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105638,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105639,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105640,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105641,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105642,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105643,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105644,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105645,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105646,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105647,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105648,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105649,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105650,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105651,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105652,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105653,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105654,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105655,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105656,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105657,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105658,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105659,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105660,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105661,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105662,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105663,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105664,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105665,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105666,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105667,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105668,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105669,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105670,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105671,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105672,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105673,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105674,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105675,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105676,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105677,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105678,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105679,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105680,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105681,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105682,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105683,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105684,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105685,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105686,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105687,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105688,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105689,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105690,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105691,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105692,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105693,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105694,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105695,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105696,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105697,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105698,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_10.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_10_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105699,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105700,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105701,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105702,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105703,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105704,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105705,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105706,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105707,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105708,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105709,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105710,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105711,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105712,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105713,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105714,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105715,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105716,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105717,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105718,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105719,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105720,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105721,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105722,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105723,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105724,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105725,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105726,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105727,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105728,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105729,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105730,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105731,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105732,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105733,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105734,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105735,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105736,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105737,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105738,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105739,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105740,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105741,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105742,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105743,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105744,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105745,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105746,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105747,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105748,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105749,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105750,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105751,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105752,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105753,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105754,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105755,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105756,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105757,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105758,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105759,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105760,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105761,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105762,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105763,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_11.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_11_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105764,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105765,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105766,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105767,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105768,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105769,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105770,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105771,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105772,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105773,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105774,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105775,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105776,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105777,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105778,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105779,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105780,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105781,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105782,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105783,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105784,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105785,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105786,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105787,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105788,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105789,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105790,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105791,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105792,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105793,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105794,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105795,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105796,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105797,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105798,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105799,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105800,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105801,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105802,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105803,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105804,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105805,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105806,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105807,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105808,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105809,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105810,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105811,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105812,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105813,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105814,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105815,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105816,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105817,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105818,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105819,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105820,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105821,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105822,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105823,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105824,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105825,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105826,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105827,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105828,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_12.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_12_io_in_ver_man_15)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105829,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+105830,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+105831,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_0))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_0))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+105832,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105833,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_0) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_0)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105834,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+105835,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_1))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_1))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+105836,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105837,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_1) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_1)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105838,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+105839,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_2))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_2))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+105840,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105841,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_2) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_2)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105842,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+105843,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_3))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_3))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+105844,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105845,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_3) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_3)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105846,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+105847,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_4))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_4))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+105848,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105849,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_4) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_4)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105850,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+105851,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_5))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_5))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+105852,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105853,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_5) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_5)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105854,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+105855,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_6))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_6))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+105856,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105857,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_6) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_6)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105858,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+105859,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_7))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_7))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+105860,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105861,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_7) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_7)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105862,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+105863,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_8))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_8))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+105864,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105865,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_8) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_8)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105866,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+105867,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_9))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_9))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+105868,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105869,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_9) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_9)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105870,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+105871,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_10))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_10))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+105872,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105873,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_10) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_10)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105874,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+105875,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_11))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_11))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+105876,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105877,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_11) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_11)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105878,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+105879,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_12))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_12))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+105880,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105881,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_12) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_12)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105882,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+105883,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_13))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_13))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+105884,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105885,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_13) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_13)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105886,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+105887,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_14))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_14))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+105888,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105889,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_14) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_14)
                                                  : 0U)))),4);
        tracep->fullCData(oldp+105890,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+105891,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_15))
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_15))
                                                  : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+105892,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_hor_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+105893,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_9_13.__PVT__mac__DOT__counter)
                                                 ? 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_15) 
                                                     >> 4U))
                                                  : 0U)
                                                 : 
                                                ((IData)(vlTOPp->io_in_flag)
                                                  ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_9_13_io_in_ver_man_15)
                                                  : 0U)))),4);
    }
}
