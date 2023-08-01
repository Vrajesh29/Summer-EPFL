// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub2(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+13906,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13907,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13908,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+13909,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+13910,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+13911,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13912,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13913,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+13914,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+13915,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13916,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13917,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+13918,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+13919,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13920,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13921,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+13922,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+13923,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13924,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13925,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+13926,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13927,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13928,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13929,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+13930,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13931,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13932,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13933,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+13934,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13935,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13936,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13937,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+13938,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13939,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13940,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13941,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+13942,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+13943,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13944,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13945,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13946,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+13947,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13948,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13949,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13950,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+13951,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13952,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13953,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13954,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+13955,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13956,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13957,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13958,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+13959,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13960,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13961,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13962,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+13963,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13964,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13965,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13966,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+13967,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13968,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13969,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13970,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+13971,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13972,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13973,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_6_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13974,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+13975,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+13976,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13977,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13978,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13979,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+13980,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13981,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13982,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13983,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+13984,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13985,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13986,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13987,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+13988,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13989,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13990,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13991,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+13992,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13993,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13994,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13995,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+13996,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+13997,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+13998,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+13999,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14000,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14001,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14002,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14003,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14004,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14005,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14006,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_7_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14007,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14008,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14009,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14010,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14011,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14012,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14013,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14014,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14015,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14016,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14017,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14018,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14019,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14020,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14021,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14022,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14023,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14024,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14025,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14026,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14027,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14028,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14029,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14030,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14031,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14032,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14033,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14034,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14035,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14036,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14037,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14038,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14039,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_0_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14040,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14041,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14042,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14043,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14044,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14045,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14046,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14047,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14048,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14049,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14050,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14051,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14052,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14053,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14054,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14055,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14056,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14057,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14058,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14059,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14060,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14061,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14062,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14063,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14064,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14065,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14066,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14067,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14068,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14069,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14070,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14071,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14072,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_1_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14073,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14074,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14075,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14076,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14077,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14078,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14079,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14080,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14081,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14082,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14083,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14084,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14085,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14086,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14087,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14088,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14089,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14090,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14091,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14092,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14093,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14094,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14095,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14096,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14097,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14098,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14099,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14100,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14101,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14102,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14103,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14104,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14105,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_2_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14106,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14108,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14109,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14110,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14111,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14112,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14113,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14114,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14115,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14116,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14117,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14118,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14119,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14120,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14121,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14122,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14123,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14124,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14125,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14126,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14127,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14128,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14129,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14130,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14131,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14132,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14133,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14134,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14135,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14136,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14137,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14138,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_3_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14139,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14140,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14141,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14142,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14143,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14144,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14145,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14146,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14147,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14148,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14149,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14150,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14151,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14152,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14153,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14154,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14155,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14156,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14157,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14158,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14159,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14160,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14161,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14162,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14163,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14164,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14165,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14166,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14167,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14168,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14169,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14170,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14171,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_4_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14172,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14173,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14174,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14175,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14176,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14177,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14178,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14179,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14180,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14181,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14182,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14183,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14184,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14185,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14186,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14187,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14188,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14189,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14190,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14191,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14192,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14193,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14194,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14195,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14196,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14197,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14198,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14199,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14200,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14201,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14202,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14203,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14204,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_5_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14205,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14206,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14207,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14208,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14209,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14210,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14211,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14212,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14213,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14214,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14215,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14216,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14217,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14218,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14219,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14220,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14221,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14222,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14223,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14224,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14225,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14226,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14227,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14228,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14229,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14230,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14231,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14232,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14233,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14234,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14235,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14236,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14237,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_6_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14238,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14239,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14240,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14241,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14242,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14243,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14244,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14245,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14246,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14247,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14248,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14249,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14250,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14251,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14252,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14253,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14254,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14255,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14256,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14257,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14258,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14259,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14260,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14261,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14262,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14263,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14264,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14265,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14266,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14267,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14268,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14269,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14270,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_3_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_3_7_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14271,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14272,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14273,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14274,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14275,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14276,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14277,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14278,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14279,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14280,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14281,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14282,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14283,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14284,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14285,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14286,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14287,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14288,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14289,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14290,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14291,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14292,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14293,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14294,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14295,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14296,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14297,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14298,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14299,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14300,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14301,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14302,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14303,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_0_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14304,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14305,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14306,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14307,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14308,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14309,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14310,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14311,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14312,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14313,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14314,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14315,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14316,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14317,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14318,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14319,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14320,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14321,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14322,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14323,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14324,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14325,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14326,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14327,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14328,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14329,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14330,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14331,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14332,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14333,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14334,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14335,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14336,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_1_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14337,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14338,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14339,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14340,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14341,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14342,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14343,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14344,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14345,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14346,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14347,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14348,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14349,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14351,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14352,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14353,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14354,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14355,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14356,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14357,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14358,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14359,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14360,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14361,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14362,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14363,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14364,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14365,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14366,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14367,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14368,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14369,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_2_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14370,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14371,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14372,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14373,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14374,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14376,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14377,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14378,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14379,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14380,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14381,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14382,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14383,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14384,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14385,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14386,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14387,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14388,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+14389,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14390,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14391,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14392,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14393,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14394,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14395,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14396,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14397,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14398,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14399,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14400,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14401,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14402,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_3_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14403,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14404,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14405,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14406,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14407,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14408,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14409,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14410,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14411,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14412,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14413,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14414,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14415,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14416,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14417,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14418,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14419,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14420,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14421,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14422,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14423,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14424,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14425,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14426,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14427,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14428,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14429,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14430,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14431,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14432,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14433,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14434,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14435,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_4_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14436,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14437,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14438,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14439,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14440,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14441,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14442,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14443,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14444,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14445,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14446,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14447,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14448,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14449,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14450,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14451,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14452,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14453,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14454,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14455,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14456,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14457,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14458,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14459,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14460,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14461,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14462,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14463,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14464,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14465,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14466,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14467,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14468,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_5_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14469,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14470,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14471,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14472,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14473,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14474,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14475,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14476,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14477,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14478,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14479,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14480,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14481,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14482,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14483,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14484,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14485,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14486,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14487,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14488,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14489,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14490,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14491,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14492,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14493,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14494,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14495,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14496,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14497,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14498,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14499,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14500,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14501,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_6_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14502,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+14503,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14504,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14505,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14506,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14507,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14508,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14509,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14510,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14511,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14512,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14513,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14514,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14515,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14516,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14517,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14518,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14519,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14520,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14521,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14522,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14523,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14524,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14525,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14526,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14527,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14528,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14529,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14530,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14531,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14532,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14533,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14534,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_4_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_4_7_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14535,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14536,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14537,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14538,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14539,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14540,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14541,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14542,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14543,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14544,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14545,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14546,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14547,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14548,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14549,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14550,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14551,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14552,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14553,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14554,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14555,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14556,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14557,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14558,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14559,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14560,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14561,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14562,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14563,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14564,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14565,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14566,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14567,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_0_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14568,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14569,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14570,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14571,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14572,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14573,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14574,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14575,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14576,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14577,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14578,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14579,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14580,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14581,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14582,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14583,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14584,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14585,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14586,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14587,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14588,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14589,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14590,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14591,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14592,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14593,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14594,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14595,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14596,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14597,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14598,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14599,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14600,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_1_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14601,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14602,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14603,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14604,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14605,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14606,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14607,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14608,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14609,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14610,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14611,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14612,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14613,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14614,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14615,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14616,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14617,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14618,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14619,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14620,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14621,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14622,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14623,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14624,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14625,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14626,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14627,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14628,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14629,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14630,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14631,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14632,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14633,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_2_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14634,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14635,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14636,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14637,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14638,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14639,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14640,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14641,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14642,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14643,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14644,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14645,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14646,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14647,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14648,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14649,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14650,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14651,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14652,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14653,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14654,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14655,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14656,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14657,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14658,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14659,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14660,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14661,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14662,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14663,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14664,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14665,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14666,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_3_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14667,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14668,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14669,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14670,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14671,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14672,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14673,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14674,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14675,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14676,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14677,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14678,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14679,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14680,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14681,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14682,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14683,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14684,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14685,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14686,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14687,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14688,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14689,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14690,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14691,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14692,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14693,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14694,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14695,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14696,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14697,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14698,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14699,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_4_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14700,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14701,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14702,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14703,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14704,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14705,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14706,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14707,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14708,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14709,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14710,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14711,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14712,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14713,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14714,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14715,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14716,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14717,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14718,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14719,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14720,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14721,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14722,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14723,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14724,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14725,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14726,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14727,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14728,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14729,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14730,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14731,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14732,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_5_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14733,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14734,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14735,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14736,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14737,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14738,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14739,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14740,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14741,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14742,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14743,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14744,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14745,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14746,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14747,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14748,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14749,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14750,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14751,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14752,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14753,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14754,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14755,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14756,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14757,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14758,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14759,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14760,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14761,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14762,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14763,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14764,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14765,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_6_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14766,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14767,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14768,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14769,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14770,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14771,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14772,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14773,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14774,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14775,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14776,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14777,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14778,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14779,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14780,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14781,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14782,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14783,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14784,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14785,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14786,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14787,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14788,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14789,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14790,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14791,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14792,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14793,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14794,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14795,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14796,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14797,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14798,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_5_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_5_7_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14799,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14800,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14801,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14802,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14803,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14804,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14805,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14806,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14807,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14808,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14809,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14810,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14811,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14812,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14813,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14814,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14815,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14816,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14817,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14818,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14819,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14820,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14821,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14822,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14823,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14824,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14825,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14826,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14827,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14828,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14829,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14830,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14831,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_0_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14832,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14833,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14834,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14835,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14836,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14837,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14838,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14839,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14840,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14841,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14842,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14843,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14844,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14845,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14846,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14847,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14848,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14849,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14850,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14851,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14852,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14853,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14854,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14855,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14856,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14857,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14858,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14859,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14860,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14861,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14862,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14863,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14864,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_1_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14865,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14866,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14867,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14868,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14869,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14870,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14871,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14872,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14873,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14874,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14875,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14876,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14877,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14878,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14879,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14880,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14881,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14882,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14883,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14884,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14885,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14886,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14887,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14888,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14889,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14890,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14891,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14892,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14893,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14894,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14895,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14896,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14897,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_2_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14898,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14899,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14900,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14901,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14902,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14903,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14904,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14905,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14906,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14907,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14908,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14909,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14910,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14911,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14912,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14913,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14914,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14915,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14916,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14917,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14918,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14919,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14920,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14921,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14922,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14923,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14924,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14925,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14926,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14927,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14928,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14929,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14930,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_3_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14931,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14932,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14933,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14934,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14935,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14936,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14937,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14938,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14939,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14940,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14941,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14942,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14943,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14944,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14945,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14946,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14947,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14948,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14949,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14950,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14951,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14952,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14953,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14954,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14955,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14956,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14957,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14958,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14959,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14960,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14961,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14962,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14963,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_4_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14964,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14965,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14966,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+14967,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14968,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14969,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+14970,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+14971,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14972,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14973,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+14974,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+14975,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14976,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14977,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+14978,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+14979,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14980,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14981,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+14982,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+14983,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14984,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+14986,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+14987,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14988,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14989,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+14990,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+14991,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14992,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14993,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+14994,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+14995,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+14996,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_5_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+14997,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+14998,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+14999,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+15000,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15001,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15002,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+15003,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+15004,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15005,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15006,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+15007,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+15008,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15009,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15010,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+15011,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+15012,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15013,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15014,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+15015,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+15016,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15017,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15018,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+15019,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+15020,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15021,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15022,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+15023,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+15024,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15025,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15026,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+15027,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+15028,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15029,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_6_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15030,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+15031,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+15032,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+15033,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15034,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15035,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+15036,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+15037,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15038,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15039,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+15040,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+15041,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15042,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15043,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+15044,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+15045,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15046,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15047,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+15048,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+15049,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15050,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15051,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+15052,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+15053,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15054,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15055,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+15056,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+15057,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15058,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15059,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+15060,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+15061,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15062,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_6_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_6_7_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15063,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+15064,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+15065,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+15066,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15067,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15068,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+15069,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+15070,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15071,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15072,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+15073,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+15074,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15075,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15076,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+15077,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+15078,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15079,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15080,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+15081,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+15082,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15083,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15084,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+15085,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+15086,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15087,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15088,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+15089,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+15090,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15091,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15092,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+15093,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+15094,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15095,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_0_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15096,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+15097,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+15098,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+15099,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15100,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15101,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+15102,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+15103,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15104,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15105,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+15106,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+15107,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15108,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15109,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+15110,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+15111,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15112,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15113,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+15114,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+15115,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15116,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15117,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+15118,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+15119,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15120,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15121,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+15122,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+15123,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15124,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15125,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+15126,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+15127,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15128,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_1_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15129,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+15130,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+15131,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+15132,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15133,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15134,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+15135,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+15136,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15137,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15138,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+15139,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+15140,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15141,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15142,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+15143,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+15144,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15145,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15146,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+15147,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+15148,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15149,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15150,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+15151,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+15152,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15153,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15154,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+15155,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+15156,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15157,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15158,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+15159,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+15160,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15161,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_2_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15162,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+15163,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+15164,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+15165,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15166,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15167,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+15168,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+15169,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15170,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15171,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+15172,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+15173,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15174,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15175,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+15176,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+15177,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15178,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15179,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+15180,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+15181,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15182,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15183,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+15184,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+15185,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15186,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15187,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+15188,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+15189,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15190,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15191,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+15192,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+15193,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15194,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_3_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15195,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+15196,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+15197,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+15198,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15199,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15200,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+15201,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+15202,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15203,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15204,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+15205,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+15206,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+15207,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+15208,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+15209,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_7_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+15210,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_7_4_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
    }
}
