// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub11(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+96738,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+96739,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+96740,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96741,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96742,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+96743,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+96744,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96745,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96746,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+96747,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+96748,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96749,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96750,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+96751,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+96752,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96753,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96754,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+96755,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+96756,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96757,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96758,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+96759,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+96760,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96761,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96762,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+96763,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+96764,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96765,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96766,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+96767,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+96768,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96769,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96770,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+96771,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+96772,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96773,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96774,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+96775,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+96776,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96777,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96778,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+96779,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+96780,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96781,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96782,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+96783,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+96784,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96785,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96786,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+96787,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+96788,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96789,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96790,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+96791,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+96792,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96793,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_1_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96794,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+96795,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+96796,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+96797,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96798,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96799,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+96800,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+96801,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96802,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96803,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+96804,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+96805,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96806,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96807,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+96808,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+96809,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96810,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96811,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+96812,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+96813,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96814,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96815,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+96816,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+96817,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96818,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96819,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+96820,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+96821,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96822,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96823,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+96824,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+96825,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96826,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96827,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+96828,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+96829,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96830,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96831,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+96832,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+96833,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96834,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96835,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+96836,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+96837,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96838,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96839,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+96840,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+96841,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96842,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96843,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+96844,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+96845,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96846,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96847,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+96848,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+96849,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96850,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96851,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+96852,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+96853,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96854,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96855,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+96856,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+96857,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96858,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_2_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96859,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+96860,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+96861,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+96862,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96863,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96864,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+96865,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+96866,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96867,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96868,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+96869,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+96870,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96871,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96872,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+96873,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+96874,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96875,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96876,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+96877,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+96878,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96879,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96880,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+96881,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+96882,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96883,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96884,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+96885,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+96886,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96887,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96888,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+96889,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+96890,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96891,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96892,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+96893,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+96894,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96895,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96896,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+96897,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+96898,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96899,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96900,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+96901,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+96902,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96903,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96904,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+96905,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+96906,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96907,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96908,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+96909,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+96910,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96911,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96912,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+96913,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+96914,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96915,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96916,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+96917,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+96918,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96919,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96920,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+96921,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+96922,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96923,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_3_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96924,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+96925,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+96926,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+96927,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96928,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96929,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+96930,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+96931,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96932,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96933,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+96934,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+96935,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96936,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96937,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+96938,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+96939,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96940,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96941,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+96942,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+96943,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96944,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96945,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+96946,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+96947,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96948,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96949,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+96950,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+96951,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96952,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96953,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+96954,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+96955,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96956,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96957,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+96958,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+96959,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96960,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96961,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+96962,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+96963,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96964,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96965,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+96966,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+96967,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96968,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96969,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+96970,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+96971,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96972,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96973,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+96974,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+96975,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96976,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96977,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+96978,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+96979,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96980,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96981,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+96982,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+96983,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96984,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+96986,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+96987,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96988,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_4_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96989,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+96990,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+96991,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+96992,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96993,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96994,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+96995,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+96996,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+96997,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+96998,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+96999,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97000,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97001,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97002,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97003,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97004,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97005,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97006,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97007,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97008,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97009,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97010,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97011,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97012,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97013,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97014,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97015,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97016,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97017,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97018,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97019,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97020,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97021,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97022,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97023,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97024,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97025,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97026,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97027,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97028,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97029,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97030,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97031,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97032,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97033,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97034,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97035,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97036,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97037,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97038,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97039,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97040,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97041,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97042,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97043,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97044,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97045,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97046,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97047,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97048,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97049,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97050,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97051,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97052,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97053,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_5_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97054,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97055,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97056,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97057,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97058,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97059,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97060,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97061,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97062,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97063,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97064,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97065,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97066,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97067,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97068,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97069,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97070,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97071,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97072,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97073,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97074,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97075,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97076,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97077,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97078,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97079,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97080,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97081,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97082,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97083,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97084,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97085,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97086,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97087,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97088,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97089,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97090,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97091,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97092,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97093,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97094,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97095,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97096,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97097,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97098,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97099,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97100,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97101,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97102,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97103,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97104,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97105,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97106,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97108,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97109,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97110,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97111,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97112,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97113,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97114,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97115,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97116,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97117,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97118,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_6.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_6_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97119,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97120,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97121,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97122,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97123,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97124,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97125,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97126,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97127,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97128,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97129,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97130,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97131,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97132,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97133,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97134,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97135,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97136,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97137,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97138,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97139,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97140,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97141,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97142,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97143,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97144,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97145,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97146,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97147,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97148,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97149,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97150,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97151,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97152,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97153,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97154,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97155,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97156,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97157,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97158,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97159,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97160,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97161,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97162,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97163,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97164,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97165,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97166,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97167,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97168,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97169,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97170,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97171,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97172,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97173,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97174,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97175,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97176,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97177,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97178,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97179,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97180,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97181,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97182,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97183,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_7.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_7_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97184,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97185,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97186,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97187,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97188,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97189,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97190,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97191,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97192,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97193,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97194,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97195,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97196,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97197,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97198,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97199,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97200,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97201,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97202,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97203,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97204,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97205,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97206,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97207,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97208,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97209,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97210,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97211,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97212,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97213,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97214,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97215,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97216,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97217,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97218,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97219,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97220,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97221,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97222,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97223,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97224,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97225,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97226,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97227,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97228,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97229,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97230,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97231,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97232,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97233,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97234,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97235,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97236,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97237,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97238,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97239,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97240,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97241,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97242,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97243,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97244,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97245,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97246,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97247,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97248,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_8.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_8_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97249,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97250,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97251,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97252,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97253,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97254,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97255,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97256,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97257,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97258,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97259,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97260,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97261,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97262,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97263,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97264,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97265,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97266,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97267,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97268,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97269,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97270,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97271,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97272,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97273,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97274,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97275,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97276,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97277,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97278,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97279,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97280,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97281,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97282,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97283,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97284,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97285,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97286,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97287,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97288,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97289,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97290,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97291,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97292,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97293,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97294,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97295,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97296,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97297,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97298,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97299,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97300,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97301,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97302,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97303,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97304,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97305,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97306,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97307,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97308,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97309,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97310,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97311,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97312,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97313,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_9.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_9_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97314,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97315,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97316,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97317,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97318,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97319,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97320,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97321,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97322,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97323,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97324,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97325,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97326,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97327,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97328,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97329,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97330,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97331,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97332,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97333,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97334,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97335,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97336,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97337,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97338,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97339,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97340,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97341,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97342,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97343,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97344,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97345,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97346,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97347,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97348,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97349,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97350,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97351,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97352,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97353,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97354,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97355,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97356,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97357,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97358,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97359,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97360,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97361,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97362,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97363,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97364,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97365,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97366,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97367,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97368,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97369,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97370,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97371,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97372,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97373,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97374,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97376,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97377,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97378,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_10.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_10_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97379,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97380,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97381,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97382,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97383,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97384,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97385,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97386,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97387,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97388,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97389,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97390,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97391,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97392,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97393,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97394,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97395,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97396,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97397,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97398,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97399,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97400,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97401,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97402,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97403,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97404,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97405,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97406,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97407,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97408,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97409,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97410,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97411,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97412,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97413,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97414,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97415,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97416,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97417,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97418,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97419,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97420,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97421,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97422,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97423,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97424,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97425,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97426,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97427,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97428,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97429,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97430,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97431,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97432,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97433,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97434,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97435,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97436,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97437,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97438,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97439,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97440,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97441,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97442,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97443,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_11.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_11_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97444,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97445,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97446,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97447,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97448,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97449,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97450,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97451,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97452,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97453,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97454,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97455,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97456,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97457,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97458,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97459,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97460,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97461,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97462,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97463,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97464,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97465,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97466,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97467,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97468,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97469,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97470,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97471,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97472,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97473,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97474,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97475,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97476,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97477,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97478,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97479,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97480,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97481,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97482,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97483,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97484,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97485,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97486,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97487,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97488,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97489,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97490,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97491,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97492,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97493,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97494,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97495,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97496,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97497,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97498,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97499,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97500,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97501,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97502,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97503,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97504,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97505,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97506,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97507,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97508,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_12.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_12_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97509,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97510,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97511,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97512,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97513,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97514,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97515,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97516,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97517,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97518,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97519,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97520,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97521,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97522,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97523,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97524,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97525,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97526,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97527,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97528,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97529,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97530,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97531,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97532,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97533,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97534,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97535,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97536,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97537,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97538,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97539,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97540,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97541,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97542,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97543,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97544,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97545,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97546,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97547,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97548,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97549,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97550,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97551,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97552,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97553,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97554,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97555,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97556,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97557,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97558,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97559,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97560,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97561,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97562,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97563,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97564,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97565,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97566,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97567,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97568,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97569,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97570,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97571,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97572,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97573,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_13.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_13_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97574,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97575,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97576,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97577,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97578,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97579,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97580,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97581,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97582,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97583,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97584,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97585,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97586,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97587,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97588,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97589,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97590,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97591,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97592,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97593,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97594,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97595,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97596,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97597,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97598,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97599,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97600,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97601,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97602,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97603,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97604,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97605,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97606,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97607,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97608,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97609,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97610,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97611,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97612,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97613,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97614,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97615,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97616,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97617,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97618,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97619,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97620,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97621,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97622,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97623,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97624,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97625,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97626,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97627,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97628,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97629,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97630,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97631,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97632,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97633,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97634,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97635,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97636,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97637,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97638,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_14.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_14_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97639,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97640,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97641,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97642,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97643,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97644,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97645,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97646,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97647,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97648,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97649,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97650,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97651,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97652,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97653,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97654,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97655,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97656,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97657,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97658,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97659,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97660,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97661,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97662,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97663,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97664,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97665,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97666,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97667,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97668,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97669,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97670,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97671,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97672,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97673,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97674,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97675,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97676,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97677,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97678,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97679,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97680,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97681,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97682,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97683,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97684,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97685,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97686,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97687,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97688,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97689,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97690,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97691,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97692,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97693,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97694,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97695,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97696,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97697,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97698,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97699,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97700,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97701,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97702,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97703,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_1_15.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_1_15_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97704,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97705,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97706,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97707,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97708,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97709,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97710,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97711,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97712,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97713,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97714,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97715,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97716,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97717,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97718,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97719,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97720,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97721,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97722,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97723,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97724,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97725,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97726,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97727,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97728,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97729,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97730,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97731,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97732,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97733,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97734,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97735,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97736,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97737,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97738,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97739,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97740,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97741,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97742,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97743,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97744,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97745,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97746,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97747,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97748,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97749,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97750,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97751,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97752,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97753,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97754,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97755,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97756,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97757,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97758,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97759,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97760,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97761,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97762,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97763,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97764,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97765,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97766,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97767,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97768,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_0.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_0_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97769,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97770,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97771,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97772,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97773,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97774,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97775,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97776,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97777,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97778,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97779,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97780,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97781,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97782,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97783,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97784,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97785,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97786,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97787,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97788,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97789,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97790,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97791,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97792,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97793,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97794,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97795,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97796,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97797,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97798,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97799,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97800,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97801,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97802,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97803,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97804,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97805,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97806,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97807,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97808,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97809,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97810,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97811,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97812,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97813,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97814,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97815,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97816,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97817,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97818,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97819,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97820,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97821,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97822,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97823,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97824,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97825,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97826,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97827,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97828,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97829,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97830,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97831,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97832,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97833,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_1.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_1_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97834,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97835,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97836,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97837,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97838,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97839,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97840,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97841,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97842,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97843,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97844,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97845,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97846,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97847,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97848,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97849,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97850,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97851,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97852,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97853,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97854,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97855,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97856,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97857,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97858,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97859,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97860,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97861,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97862,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97863,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97864,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97865,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97866,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97867,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97868,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97869,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97870,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97871,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97872,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97873,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97874,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97875,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97876,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97877,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97878,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97879,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97880,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97881,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97882,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97883,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97884,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97885,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97886,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97887,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97888,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97889,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97890,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97891,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97892,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97893,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97894,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97895,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97896,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97897,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97898,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_2.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_2_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97899,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97900,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97901,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97902,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97903,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97904,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97905,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97906,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97907,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97908,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97909,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97910,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97911,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97912,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97913,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97914,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97915,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97916,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97917,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97918,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97919,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97920,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97921,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97922,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97923,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97924,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97925,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97926,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97927,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97928,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97929,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97930,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97931,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97932,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97933,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97934,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97935,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97936,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+97937,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+97938,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97939,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97940,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+97941,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+97942,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97943,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97944,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+97945,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+97946,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97947,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97948,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+97949,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+97950,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97951,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97952,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+97953,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+97954,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97955,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97956,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+97957,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+97958,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97959,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97960,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+97961,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+97962,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97963,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_3.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_3_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97964,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+97965,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+97966,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0))))),4);
        tracep->fullCData(oldp+97967,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97968,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97969,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+97970,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1))))),4);
        tracep->fullCData(oldp+97971,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97972,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97973,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+97974,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2))))),4);
        tracep->fullCData(oldp+97975,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97976,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97977,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+97978,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3))))),4);
        tracep->fullCData(oldp+97979,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97980,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_3)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97981,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+97982,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4))))),4);
        tracep->fullCData(oldp+97983,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97984,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_4)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+97986,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5))))),4);
        tracep->fullCData(oldp+97987,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97988,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_5)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97989,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+97990,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6))))),4);
        tracep->fullCData(oldp+97991,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97992,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_6)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97993,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+97994,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7))))),4);
        tracep->fullCData(oldp+97995,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+97996,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_7)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+97997,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+97998,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_8))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_8))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_8))))),4);
        tracep->fullCData(oldp+97999,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98000,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_8) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_8)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98001,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+98002,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_9))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_9))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_9))))),4);
        tracep->fullCData(oldp+98003,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98004,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_9) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_9)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98005,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+98006,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_10))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_10))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_10))))),4);
        tracep->fullCData(oldp+98007,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98008,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_10) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_10)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98009,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+98010,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_11))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_11))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_11))))),4);
        tracep->fullCData(oldp+98011,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98012,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_11) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_11)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98013,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+98014,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_12))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_12))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_12))))),4);
        tracep->fullCData(oldp+98015,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98016,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_12) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_12)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98017,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+98018,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_13))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_13))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_13))))),4);
        tracep->fullCData(oldp+98019,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98020,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_13) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_13)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98021,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+98022,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_14))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_14))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_14))))),4);
        tracep->fullCData(oldp+98023,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98024,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_14) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_14)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98025,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+98026,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_15))
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_15))
                                                    : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_15))))),4);
        tracep->fullCData(oldp+98027,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98028,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_4.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_15) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_4_io_in_ver_man_15)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98029,((0x3fU & ((IData)(vlTOPp->io_in_flag)
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
        tracep->fullCData(oldp+98030,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+98031,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+98032,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98033,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_0)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98034,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+98035,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+98036,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98037,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_1)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98038,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+98039,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+98040,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98041,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_2)
                                                    : 0U)))),4);
        tracep->fullCData(oldp+98042,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+98043,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
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
        tracep->fullCData(oldp+98044,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+98045,((0xfU & ((IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_2_5.__PVT__mac__DOT__counter)
                                                ? ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3) 
                                                       >> 4U))
                                                    : 0U)
                                                : ((IData)(vlTOPp->io_in_flag)
                                                    ? (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_2_5_io_in_ver_man_3)
                                                    : 0U)))),4);
    }
}
