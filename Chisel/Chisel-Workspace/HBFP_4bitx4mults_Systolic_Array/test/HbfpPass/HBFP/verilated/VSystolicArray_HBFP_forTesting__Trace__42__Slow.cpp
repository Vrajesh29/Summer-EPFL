// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub29(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+102325,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+102326,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102327,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+102328,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102329,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102330,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102331,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+102332,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+102333,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102334,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+102335,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102336,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+102337,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102338,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102339,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102340,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+102341,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+102342,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102343,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+102344,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102345,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+102346,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102347,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102348,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102349,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+102350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+102351,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102352,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+102353,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102354,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+102355,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102356,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102357,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102358,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+102359,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+102360,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102361,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+102362,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102363,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+102364,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102365,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102366,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_10_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102367,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_11.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_11.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_11.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+102368,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+102369,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+102370,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102371,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+102372,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_0))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102373,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+102374,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102375,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_0))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102376,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102377,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+102378,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+102379,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102380,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+102381,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_1))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102382,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+102383,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102384,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_1))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102385,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102386,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+102387,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+102388,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102389,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+102390,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_2))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102391,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+102392,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102393,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_2))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102394,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102395,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+102396,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+102397,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102398,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+102399,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_3))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102400,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+102401,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102402,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_3))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102403,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102404,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+102405,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+102406,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102407,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+102408,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_4))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102409,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+102410,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102411,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_4))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102412,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102413,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+102414,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+102415,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102416,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+102417,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_5))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102418,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+102419,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102420,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_5))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102421,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102422,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+102423,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+102424,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102425,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+102426,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_6))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102427,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+102428,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102429,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_6))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102430,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102431,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+102432,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+102433,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102434,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+102435,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_7))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102436,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+102437,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102438,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_7))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102439,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102440,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+102441,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+102442,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102443,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+102444,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_8))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102445,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+102446,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102447,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_8))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102448,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102449,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+102450,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+102451,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102452,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+102453,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_9))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102454,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+102455,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102456,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_9))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102457,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102458,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+102459,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+102460,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102461,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+102462,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_10))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102463,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+102464,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102465,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102466,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102467,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+102468,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+102469,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102470,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+102471,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102472,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+102473,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102474,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102475,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102476,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+102477,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+102478,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102479,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+102480,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102481,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+102482,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102483,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102484,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102485,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+102486,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+102487,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102488,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+102489,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102490,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+102491,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102492,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102493,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102494,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+102495,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+102496,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102497,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+102498,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102499,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+102500,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102501,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102502,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102503,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+102504,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+102505,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102506,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+102507,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102508,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+102509,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102510,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102511,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_11_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102512,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_12.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_12.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_12.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+102513,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+102514,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+102515,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102516,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+102517,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_0))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102518,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+102519,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102520,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_0))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102521,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102522,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+102523,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+102524,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102525,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+102526,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_1))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102527,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+102528,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102529,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_1))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102530,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102531,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+102532,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+102533,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102534,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+102535,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_2))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102536,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+102537,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102538,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_2))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102539,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102540,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+102541,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+102542,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102543,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+102544,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_3))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102545,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+102546,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102547,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_3))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102548,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102549,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+102550,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+102551,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102552,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+102553,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_4))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102554,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+102555,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102556,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_4))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102557,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102558,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+102559,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+102560,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102561,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+102562,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_5))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102563,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+102564,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102565,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_5))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102566,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102567,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+102568,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+102569,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102570,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+102571,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_6))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102572,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+102573,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102574,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_6))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102575,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102576,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+102577,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+102578,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102579,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+102580,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_7))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102581,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+102582,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102583,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_7))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102584,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102585,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+102586,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+102587,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102588,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+102589,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_8))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102590,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+102591,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102592,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_8))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102593,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102594,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+102595,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+102596,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102597,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+102598,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_9))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102599,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+102600,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102601,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_9))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102602,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102603,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+102604,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+102605,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102606,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+102607,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_10))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102608,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+102609,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102610,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102611,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102612,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+102613,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+102614,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102615,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+102616,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102617,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+102618,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102619,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102620,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102621,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+102622,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+102623,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102624,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+102625,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102626,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+102627,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102628,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102629,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102630,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+102631,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+102632,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102633,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+102634,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102635,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+102636,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102637,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102638,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102639,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+102640,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+102641,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102642,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+102643,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102644,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+102645,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102646,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102647,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102648,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+102649,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+102650,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102651,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+102652,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102653,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+102654,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102655,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102656,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_12_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102657,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+102658,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+102659,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+102660,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102661,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+102662,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_0))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102663,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+102664,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102665,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_0))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102666,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102667,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+102668,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+102669,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102670,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+102671,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_1))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102672,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+102673,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102674,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_1))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102675,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102676,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+102677,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+102678,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102679,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+102680,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_2))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102681,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+102682,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102683,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_2))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102684,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102685,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+102686,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+102687,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102688,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+102689,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_3))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102690,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+102691,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102692,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_3))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102693,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102694,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+102695,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+102696,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102697,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+102698,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_4))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102699,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+102700,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102701,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_4))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102702,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102703,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+102704,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+102705,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102706,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+102707,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_5))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102708,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+102709,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102710,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_5))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102711,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102712,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+102713,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+102714,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102715,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+102716,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_6))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102717,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+102718,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102719,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_6))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102720,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102721,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+102722,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+102723,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102724,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+102725,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_7))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102726,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+102727,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102728,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_7))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102729,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102730,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+102731,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+102732,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102733,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+102734,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_8))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102735,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+102736,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102737,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_8))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102738,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102739,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+102740,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+102741,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102742,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+102743,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_9))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102744,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+102745,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102746,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_9))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102747,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102748,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+102749,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+102750,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102751,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+102752,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_10))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102753,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+102754,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102755,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102756,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102757,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+102758,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+102759,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102760,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+102761,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102762,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+102763,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102764,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102765,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102766,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+102767,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+102768,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102769,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+102770,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102771,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+102772,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102773,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102774,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102775,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+102776,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+102777,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102778,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+102779,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102780,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+102781,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102782,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102783,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102784,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+102785,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+102786,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102787,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+102788,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102789,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+102790,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102791,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102792,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102793,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+102794,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+102795,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102796,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+102797,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102798,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+102799,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102800,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102801,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_13_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102802,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+102803,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+102804,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+102805,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102806,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+102807,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_0))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102808,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+102809,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102810,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_0))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102811,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102812,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+102813,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+102814,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102815,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+102816,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_1))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102817,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+102818,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102819,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_1))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102820,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102821,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+102822,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+102823,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102824,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+102825,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_2))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102826,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+102827,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102828,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_2))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102829,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102830,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+102831,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+102832,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102833,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+102834,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_3))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102835,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+102836,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102837,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_3))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102838,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102839,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+102840,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+102841,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102842,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+102843,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_4))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102844,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+102845,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102846,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_4))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102847,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102848,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+102849,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+102850,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102851,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+102852,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_5))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102853,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+102854,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102855,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_5))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102856,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102857,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+102858,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+102859,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102860,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+102861,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_6))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102862,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+102863,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102864,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_6))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102865,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102866,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+102867,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+102868,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102869,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+102870,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_7))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102871,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+102872,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102873,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_7))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102874,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102875,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+102876,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+102877,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102878,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+102879,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_8))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102880,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+102881,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102882,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_8))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102883,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102884,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+102885,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+102886,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102887,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+102888,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_9))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102889,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+102890,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102891,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_9))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102892,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102893,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+102894,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+102895,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102896,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+102897,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_10))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102898,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+102899,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102900,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102901,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102902,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+102903,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+102904,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102905,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+102906,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102907,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+102908,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102909,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102910,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102911,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+102912,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+102913,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102914,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+102915,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102916,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+102917,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102918,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102919,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102920,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+102921,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+102922,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102923,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+102924,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102925,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+102926,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102927,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102928,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102929,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+102930,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+102931,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102932,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+102933,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102934,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+102935,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102936,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102937,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102938,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+102939,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+102940,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102941,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+102942,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102943,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+102944,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102945,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102946,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_14_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102947,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 ((0x3fU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15.__PVT__adder__DOT__addition))
                                                   ? 0x3fU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15.__PVT__adder__DOT__addition))
                                                  : 
                                                 ((0xfU 
                                                   < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15.__PVT__adder__DOT__addition))
                                                   ? 0xfU
                                                   : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_15_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+102948,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+102949,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_0))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+102950,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102951,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+102952,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_0))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102953,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_0))
                                         : 0U)),4);
        tracep->fullCData(oldp+102954,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_0) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102955,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_0))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102956,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_0) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_0) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102957,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+102958,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_1))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+102959,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102960,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+102961,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_1))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102962,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_1))
                                         : 0U)),4);
        tracep->fullCData(oldp+102963,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_1) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102964,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_1))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102965,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_1) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_1) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102966,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+102967,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_2))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+102968,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102969,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+102970,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_2))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102971,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_2))
                                         : 0U)),4);
        tracep->fullCData(oldp+102972,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_2) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102973,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_2))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102974,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_2) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_2) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102975,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+102976,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_3))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+102977,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102978,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+102979,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_3))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102980,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_3))
                                         : 0U)),4);
        tracep->fullCData(oldp+102981,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_3) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102982,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_3))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102983,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_3) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_3) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102984,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+102985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_4))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+102986,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102987,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+102988,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_4))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102989,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_4))
                                         : 0U)),4);
        tracep->fullCData(oldp+102990,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_4) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102991,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_4))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102992,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_4) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_4) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102993,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+102994,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_5))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+102995,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+102996,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+102997,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_5))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+102998,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_5))
                                         : 0U)),4);
        tracep->fullCData(oldp+102999,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_5) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103000,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_5))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103001,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_5) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_5) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103002,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+103003,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_6))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+103004,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103005,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+103006,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_6))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103007,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_6))
                                         : 0U)),4);
        tracep->fullCData(oldp+103008,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_6) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103009,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_6))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103010,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_6) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_6) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103011,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+103012,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_7))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+103013,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103014,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+103015,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_7))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103016,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_7))
                                         : 0U)),4);
        tracep->fullCData(oldp+103017,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_7) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103018,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_7))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103019,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_7) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_7) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103020,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+103021,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_8))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+103022,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103023,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+103024,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_8))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103025,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_8))
                                         : 0U)),4);
        tracep->fullCData(oldp+103026,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_8) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103027,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_8))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103028,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_8) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_8) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103029,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+103030,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_9))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+103031,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103032,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+103033,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_9))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103034,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_9))
                                         : 0U)),4);
        tracep->fullCData(oldp+103035,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_9) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103036,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_9))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103037,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_9) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_9) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103038,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+103039,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_10))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+103040,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103041,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+103042,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_10))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103043,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_10))
                                         : 0U)),4);
        tracep->fullCData(oldp+103044,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_10) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103045,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_10))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103046,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_10) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_10) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103047,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+103048,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_11))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+103049,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103050,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+103051,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_11))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103052,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_11))
                                         : 0U)),4);
        tracep->fullCData(oldp+103053,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_11) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103054,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_11))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103055,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_11) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_11) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103056,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+103057,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_12))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+103058,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103059,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+103060,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_12))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103061,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_12))
                                         : 0U)),4);
        tracep->fullCData(oldp+103062,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_12) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103063,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_12))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103064,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_12) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_12) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103065,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+103066,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_13))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+103067,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103068,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+103069,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_13))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103070,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_13))
                                         : 0U)),4);
        tracep->fullCData(oldp+103071,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_13) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103072,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_13))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103073,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_13) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_13) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103074,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+103075,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_14))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+103076,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103077,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+103078,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_14))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103079,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_14))
                                         : 0U)),4);
        tracep->fullCData(oldp+103080,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_14) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103081,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_14))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103082,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_14) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_14) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103083,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+103084,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                (0xfU 
                                                 & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_15))
                                                 : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+103085,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103086,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+103087,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_15))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103088,(((IData)(vlTOPp->io_in_flag)
                                         ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_15))
                                         : 0U)),4);
        tracep->fullCData(oldp+103089,(((IData)(vlTOPp->io_in_flag)
                                         ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_15) 
                                                  >> 4U))
                                         : 0U)),4);
        tracep->fullCData(oldp+103090,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_15))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullCData(oldp+103091,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_hor_r_man_15) 
                                                      >> 4U))
                                                   : 0U) 
                                                 * 
                                                 ((IData)(vlTOPp->io_in_flag)
                                                   ? 
                                                  (3U 
                                                   & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_15_15_io_in_ver_r_man_15) 
                                                      >> 4U))
                                                   : 0U)))),8);
        tracep->fullBit(oldp+103092,(1U));
    }
}
