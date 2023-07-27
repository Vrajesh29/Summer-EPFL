// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSystolicArray_HBFP_forTesting__Syms.h"


void VSystolicArray_HBFP_forTesting::traceFullSub23(void* userp, VerilatedVcd* tracep) {
    VSystolicArray_HBFP_forTesting__Syms* __restrict vlSymsp = static_cast<VSystolicArray_HBFP_forTesting__Syms*>(userp);
    VSystolicArray_HBFP_forTesting* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+93036,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93037,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93038,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93039,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93040,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93041,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93042,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+93043,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+93044,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93045,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93046,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93047,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93048,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93049,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93050,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93051,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+93052,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+93053,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93054,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93055,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93056,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93057,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93058,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93059,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93060,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+93061,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+93062,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93063,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93064,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93065,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93066,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93067,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93068,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93069,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+93070,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+93071,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93072,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93073,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93074,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93075,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93076,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93077,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93078,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+93079,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+93080,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93081,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93082,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93083,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93084,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93085,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93086,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_10_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93087,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_11.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_11.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_11.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_11.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+93088,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+93089,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+93090,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93091,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93092,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93093,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93094,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93095,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93096,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93097,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+93098,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+93099,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93100,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93101,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93102,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93103,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93104,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93105,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93106,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+93107,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+93108,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93109,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93110,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93111,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93112,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93113,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93114,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93115,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+93116,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+93117,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93118,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93119,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93120,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93121,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93122,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93123,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93124,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+93125,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+93126,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93127,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93128,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93129,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93130,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93131,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93132,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93133,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+93134,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+93135,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93136,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93137,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93138,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93139,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93140,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93141,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93142,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+93143,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+93144,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93145,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93146,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93147,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93148,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93149,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93150,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93151,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+93152,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+93153,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93154,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93155,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93156,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93157,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93158,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93159,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93160,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+93161,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+93162,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93163,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93164,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93165,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93166,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93167,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93168,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93169,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+93170,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+93171,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93172,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93173,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93174,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93175,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93176,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93177,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93178,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+93179,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+93180,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93181,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93182,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93183,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93184,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93185,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93186,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93187,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+93188,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+93189,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93190,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93191,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93192,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93193,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93194,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93195,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93196,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+93197,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+93198,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93199,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93200,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93201,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93202,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93203,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93204,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93205,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+93206,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+93207,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93208,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93209,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93210,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93211,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93212,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93213,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93214,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+93215,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+93216,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93217,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93218,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93219,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93220,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93221,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93222,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93223,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+93224,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+93225,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93226,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93227,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93228,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93229,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93230,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93231,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_11_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93232,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_12.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_12.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_12.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_12.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+93233,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+93234,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+93235,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93236,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93237,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93238,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93239,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93240,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93241,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93242,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+93243,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+93244,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93245,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93246,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93247,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93248,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93249,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93250,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93251,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+93252,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+93253,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93254,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93255,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93256,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93257,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93258,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93259,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93260,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+93261,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+93262,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93263,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93264,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93265,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93266,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93267,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93268,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93269,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+93270,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+93271,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93272,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93273,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93274,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93275,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93276,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93277,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93278,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+93279,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+93280,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93281,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93282,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93283,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93284,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93285,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93286,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93287,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+93288,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+93289,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93290,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93291,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93292,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93293,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93294,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93295,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93296,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+93297,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+93298,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93299,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93300,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93301,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93302,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93303,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93304,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93305,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+93306,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+93307,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93308,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93309,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93310,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93311,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93312,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93313,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93314,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+93315,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+93316,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93317,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93318,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93319,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93320,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93321,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93322,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93323,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+93324,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+93325,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93326,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93328,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93329,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93330,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93331,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93332,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+93333,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+93334,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93335,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93336,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93337,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93338,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93339,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93340,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93341,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+93342,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+93343,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93344,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93345,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93346,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93347,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93348,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93349,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93350,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+93351,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+93352,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93353,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93354,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93355,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93356,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93357,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93358,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93359,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+93360,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+93361,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93362,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93363,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93364,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93365,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93366,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93367,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93368,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+93369,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+93370,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93371,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93372,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93373,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93374,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93375,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93376,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_12_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93377,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_13.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_13.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_13.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_13.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+93378,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+93379,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+93380,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93381,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93382,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93383,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93384,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93385,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93386,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93387,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+93388,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+93389,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93390,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93391,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93392,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93393,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93394,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93395,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93396,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+93397,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+93398,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93399,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93400,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93401,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93402,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93403,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93404,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93405,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+93406,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+93407,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93408,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93409,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93410,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93411,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93412,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93413,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93414,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+93415,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+93416,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93417,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93418,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93419,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93420,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93421,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93422,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93423,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+93424,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+93425,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93426,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93427,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93428,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93429,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93430,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93431,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93432,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+93433,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+93434,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93435,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93436,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93437,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93438,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93439,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93440,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93441,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+93442,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+93443,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93444,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93445,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93446,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93447,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93448,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93449,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93450,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+93451,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+93452,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93453,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93454,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93455,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93456,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93457,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93458,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93459,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+93460,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+93461,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93462,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93463,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93464,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93465,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93466,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93467,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93468,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+93469,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+93470,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93471,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93473,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93474,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93475,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93476,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93477,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+93478,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+93479,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93480,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93481,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93482,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93483,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93484,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93485,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93486,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+93487,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+93488,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93489,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93490,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93491,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93492,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93493,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93494,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93495,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+93496,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+93497,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93498,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93499,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93500,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93501,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93502,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93503,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93504,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+93505,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+93506,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93507,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93508,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93509,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93510,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93511,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93512,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93513,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+93514,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+93515,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93516,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93517,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93518,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93519,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93520,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93521,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_13_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93522,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_14.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_14.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_14.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_14.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+93523,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+93524,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+93525,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93526,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93527,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93528,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93529,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93530,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93531,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93532,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+93533,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+93534,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93535,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93536,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93537,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93538,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93539,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93540,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93541,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+93542,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+93543,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93544,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93545,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93546,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93547,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93548,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93549,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93550,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+93551,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+93552,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93553,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93554,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93555,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93556,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93557,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93558,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93559,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+93560,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+93561,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93562,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93563,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93564,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93565,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93566,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93567,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93568,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+93569,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+93570,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93571,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93572,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93573,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93574,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93575,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93576,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93577,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+93578,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+93579,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93580,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93581,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93582,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93583,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93584,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93585,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93586,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+93587,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+93588,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93589,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93590,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93591,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93592,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93593,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93594,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93595,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+93596,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+93597,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93598,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93599,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93600,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93601,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93602,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93603,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93604,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+93605,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+93606,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93607,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93608,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93609,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93610,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93611,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93612,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93613,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+93614,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+93615,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93616,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93617,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93618,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93619,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93620,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93621,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93622,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+93623,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+93624,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93625,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93626,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93627,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93628,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93629,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93630,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93631,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+93632,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+93633,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93634,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93635,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93636,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93637,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93638,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93639,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93640,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+93641,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+93642,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93643,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93644,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93645,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93646,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93647,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93648,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93649,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+93650,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+93651,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93652,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93653,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93654,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93655,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93656,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93657,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93658,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+93659,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+93660,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93661,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93662,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93663,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93664,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93665,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93666,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_14_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93667,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_15.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_15.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_15.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_11_15.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+93668,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+93669,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+93670,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93671,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93672,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93673,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93674,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93675,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93676,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93677,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+93678,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+93679,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93680,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93681,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93682,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93683,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93684,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93685,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93686,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+93687,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+93688,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93689,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93690,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93691,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93692,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93693,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93694,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93695,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+93696,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+93697,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93698,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93699,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93700,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93701,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93702,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93703,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93704,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+93705,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+93706,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93707,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93708,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93709,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93710,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93711,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93712,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93713,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+93714,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+93715,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93716,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93717,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93718,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93719,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93720,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93721,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93722,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+93723,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+93724,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93725,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93726,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93727,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93728,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93729,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93730,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93731,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+93732,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+93733,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93734,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93735,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93736,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93737,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93738,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93739,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93740,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+93741,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+93742,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93743,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93744,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93745,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93746,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93747,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93748,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93749,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+93750,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+93751,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93752,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93753,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93754,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93755,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93756,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93757,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93758,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+93759,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+93760,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93761,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93762,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93763,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93764,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93765,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93766,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93767,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+93768,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+93769,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93770,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93771,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93772,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93773,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93774,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93775,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93776,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+93777,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+93778,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93779,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93780,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93781,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93782,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93783,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93784,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93785,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+93786,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+93787,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93788,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93789,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93790,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93791,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93792,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93793,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93794,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+93795,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+93796,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93797,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93798,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93799,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93800,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93801,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93802,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93803,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+93804,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+93805,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93806,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93807,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93808,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93809,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93810,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93811,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_11_15_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93812,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_0.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_0.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_0.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_0.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+93813,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_0)))),4);
        tracep->fullCData(oldp+93814,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+93815,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93816,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93817,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93818,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93819,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93820,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93821,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93822,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_1)))),4);
        tracep->fullCData(oldp+93823,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+93824,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93825,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93826,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93827,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93828,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93829,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93830,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93831,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_2)))),4);
        tracep->fullCData(oldp+93832,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+93833,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93834,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93835,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93836,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93837,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93838,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93839,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93840,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_3)))),4);
        tracep->fullCData(oldp+93841,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+93842,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93843,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93844,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93845,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93846,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93847,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93848,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93849,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_4)))),4);
        tracep->fullCData(oldp+93850,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+93851,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93852,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93853,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93854,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93855,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93856,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93857,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93858,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_5)))),4);
        tracep->fullCData(oldp+93859,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+93860,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93861,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93862,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93863,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+93864,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93865,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93866,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93867,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_6)))),4);
        tracep->fullCData(oldp+93868,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+93869,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93870,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93871,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93872,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+93873,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93874,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93875,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93876,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_7)))),4);
        tracep->fullCData(oldp+93877,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+93878,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93879,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93880,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93881,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+93882,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93883,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93884,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93885,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_8)))),4);
        tracep->fullCData(oldp+93886,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+93887,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93888,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93889,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93890,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+93891,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93892,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93893,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93894,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_9)))),4);
        tracep->fullCData(oldp+93895,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+93896,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93897,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93898,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93899,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+93900,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93901,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93902,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93903,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_10)))),4);
        tracep->fullCData(oldp+93904,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+93905,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93906,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93907,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93908,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+93909,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93910,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93911,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93912,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_11)))),4);
        tracep->fullCData(oldp+93913,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+93914,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93915,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93916,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93917,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+93918,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93919,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93920,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93921,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_12)))),4);
        tracep->fullCData(oldp+93922,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+93923,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93924,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93925,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93926,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+93927,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93928,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93929,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93930,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_13)))),4);
        tracep->fullCData(oldp+93931,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+93932,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93933,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93934,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93935,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+93936,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93937,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93938,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93939,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_14)))),4);
        tracep->fullCData(oldp+93940,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+93941,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93942,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93943,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93944,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+93945,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93946,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93947,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93948,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_15)))),4);
        tracep->fullCData(oldp+93949,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+93950,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93951,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93952,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93953,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+93954,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93955,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93956,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_hor_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_0_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93957,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_1.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_1.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_1.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_1.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+93958,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+93959,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+93960,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93961,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93962,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93963,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+93964,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93965,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93966,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93967,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+93968,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+93969,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93970,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93971,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93972,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+93973,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93974,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93975,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93976,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+93977,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+93978,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93979,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93980,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93981,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+93982,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93983,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93984,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93985,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+93986,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+93987,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93988,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93989,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93990,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+93991,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93992,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93993,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93994,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+93995,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+93996,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+93997,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+93998,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+93999,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+94000,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94001,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94002,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94003,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+94004,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+94005,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94006,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+94007,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94008,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+94009,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94010,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94011,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94012,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+94013,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+94014,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94015,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+94016,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94017,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+94018,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94019,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94020,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94021,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+94022,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+94023,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94024,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+94025,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94026,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+94027,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94028,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94029,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94030,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+94031,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+94032,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94033,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+94034,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94035,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+94036,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94037,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94038,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94039,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+94040,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+94041,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94042,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+94043,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94044,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+94045,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94046,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94047,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94048,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+94049,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+94050,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94051,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+94052,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94053,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+94054,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94055,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94056,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94057,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+94058,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+94059,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94060,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+94061,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94062,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+94063,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94064,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94065,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94066,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+94067,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+94068,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94069,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+94070,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94071,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+94072,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94073,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94074,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94075,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+94076,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+94077,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94078,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+94079,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94080,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+94081,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94082,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94083,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94084,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+94085,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+94086,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94087,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+94088,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94089,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+94090,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94091,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94092,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94093,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+94094,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+94095,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94096,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+94097,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94098,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+94099,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94100,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94101,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_1_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94102,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_2.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_2.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_2.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_2.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+94103,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+94104,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+94105,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94106,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+94107,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94108,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+94109,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94110,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94111,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94112,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+94113,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+94114,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94115,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+94116,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94117,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+94118,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94119,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94120,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94121,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+94122,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+94123,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94124,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+94125,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94126,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+94127,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94128,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94129,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94130,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+94131,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+94132,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94133,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+94134,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94135,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+94136,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94137,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94138,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94139,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+94140,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+94141,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94142,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+94143,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94144,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+94145,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94146,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94147,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94148,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+94149,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+94150,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94151,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+94152,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94153,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+94154,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94155,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94156,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94157,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+94158,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+94159,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94160,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+94161,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94162,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+94163,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94164,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94165,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94166,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+94167,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+94168,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94169,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+94170,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94171,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+94172,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94173,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94174,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94175,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+94176,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+94177,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94178,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+94179,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94180,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+94181,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94182,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94183,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94184,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+94185,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+94186,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94187,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+94188,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94189,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+94190,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94191,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94192,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94193,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+94194,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+94195,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94196,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+94197,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94198,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+94199,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94200,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94201,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94202,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+94203,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+94204,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94205,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+94206,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94207,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+94208,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94209,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94210,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94211,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+94212,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+94213,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94214,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+94215,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94216,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+94217,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94218,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94219,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94220,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+94221,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+94222,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94223,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+94224,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94225,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+94226,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94227,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94228,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94229,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+94230,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+94231,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94232,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+94233,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94234,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+94235,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94236,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94237,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94238,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+94239,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+94240,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94241,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+94242,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94243,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+94244,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94245,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94246,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_2_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94247,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_3.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_3.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_3.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_3.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+94248,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+94249,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+94250,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94251,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+94252,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94253,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+94254,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94255,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94256,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94257,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+94258,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+94259,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94260,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+94261,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94262,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+94263,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94264,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94265,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94266,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+94267,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+94268,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94269,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+94270,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94271,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+94272,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94273,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94274,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94275,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+94276,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+94277,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94278,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+94279,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94280,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+94281,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94282,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94283,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94284,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+94285,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+94286,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94287,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+94288,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94289,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+94290,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94291,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94292,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94293,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+94294,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+94295,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94296,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+94297,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94298,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+94299,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94300,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94301,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94302,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+94303,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+94304,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94305,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+94306,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94307,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+94308,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94309,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94310,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94311,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+94312,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+94313,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94314,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+94315,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94316,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+94317,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94318,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94319,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94320,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+94321,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+94322,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94323,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+94324,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94325,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+94326,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94327,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94328,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94329,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+94330,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+94331,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94332,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+94333,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94334,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+94335,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94336,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94337,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94338,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+94339,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+94340,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94341,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+94342,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94343,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+94344,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94345,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94346,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94347,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+94348,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+94349,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94350,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+94351,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94352,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+94353,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94354,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94355,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94356,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+94357,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+94358,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94359,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+94360,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94361,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+94362,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94363,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94364,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94365,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+94366,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+94367,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94368,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+94369,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94370,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+94371,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94372,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94373,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94374,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+94375,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+94376,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94377,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+94378,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94379,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+94380,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94381,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94382,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94383,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+94384,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+94385,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94386,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+94387,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94388,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+94389,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94390,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94391,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_3_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94392,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_4.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_4.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_4.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_4.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+94393,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+94394,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+94395,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94396,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+94397,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94398,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+94399,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94400,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94401,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94402,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+94403,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+94404,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94405,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+94406,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94407,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+94408,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94409,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94410,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94411,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+94412,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+94413,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94414,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+94415,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94416,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+94417,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94418,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94419,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94420,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+94421,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+94422,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94423,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+94424,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94425,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+94426,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94427,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94428,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94429,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+94430,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+94431,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94432,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+94433,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94434,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+94435,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94436,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94437,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94438,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_5)))),4);
        tracep->fullCData(oldp+94439,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_5))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_5)))),4);
        tracep->fullCData(oldp+94440,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94441,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+94442,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_5))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94443,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_5))
                                        : 0U)),4);
        tracep->fullCData(oldp+94444,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_5) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94445,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_5))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94446,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_5) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_5) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94447,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_6)))),4);
        tracep->fullCData(oldp+94448,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_6))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_6)))),4);
        tracep->fullCData(oldp+94449,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94450,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+94451,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_6))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94452,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_6))
                                        : 0U)),4);
        tracep->fullCData(oldp+94453,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_6) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94454,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_6))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94455,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_6) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_6) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94456,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_7)))),4);
        tracep->fullCData(oldp+94457,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_7))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_7)))),4);
        tracep->fullCData(oldp+94458,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94459,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+94460,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_7))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94461,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_7))
                                        : 0U)),4);
        tracep->fullCData(oldp+94462,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_7) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94463,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_7))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94464,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_7) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_7) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94465,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_8)))),4);
        tracep->fullCData(oldp+94466,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_8))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_8)))),4);
        tracep->fullCData(oldp+94467,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94468,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+94469,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_8))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94470,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_8))
                                        : 0U)),4);
        tracep->fullCData(oldp+94471,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_8) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94472,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_8))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94473,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_8) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_8) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94474,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_9)))),4);
        tracep->fullCData(oldp+94475,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_9))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_9)))),4);
        tracep->fullCData(oldp+94476,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94477,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+94478,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_9))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94479,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_9))
                                        : 0U)),4);
        tracep->fullCData(oldp+94480,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_9) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94481,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_9))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94482,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_9) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_9) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94483,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_10)))),4);
        tracep->fullCData(oldp+94484,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_10))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_10)))),4);
        tracep->fullCData(oldp+94485,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94486,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+94487,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_10))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94488,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_10))
                                        : 0U)),4);
        tracep->fullCData(oldp+94489,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_10) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94490,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_10))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94491,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_10) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_10) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94492,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_11)))),4);
        tracep->fullCData(oldp+94493,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_11))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_11)))),4);
        tracep->fullCData(oldp+94494,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94495,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+94496,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_11))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94497,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_11))
                                        : 0U)),4);
        tracep->fullCData(oldp+94498,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_11) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94499,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_11))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94500,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_11) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_11) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94501,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_12)))),4);
        tracep->fullCData(oldp+94502,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_12))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_12)))),4);
        tracep->fullCData(oldp+94503,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94504,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+94505,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_12))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94506,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_12))
                                        : 0U)),4);
        tracep->fullCData(oldp+94507,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_12) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94508,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_12))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94509,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_12) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_12) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94510,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_13)))),4);
        tracep->fullCData(oldp+94511,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_13))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_13)))),4);
        tracep->fullCData(oldp+94512,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94513,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+94514,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_13))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94515,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_13))
                                        : 0U)),4);
        tracep->fullCData(oldp+94516,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_13) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94517,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_13))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94518,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_13) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_13) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94519,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_14)))),4);
        tracep->fullCData(oldp+94520,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_14))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_14)))),4);
        tracep->fullCData(oldp+94521,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94522,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+94523,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_14))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94524,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_14))
                                        : 0U)),4);
        tracep->fullCData(oldp+94525,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_14) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94526,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_14))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94527,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_14) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_14) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94528,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_15)))),4);
        tracep->fullCData(oldp+94529,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_15))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_15)))),4);
        tracep->fullCData(oldp+94530,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94531,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+94532,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_15))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94533,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_15))
                                        : 0U)),4);
        tracep->fullCData(oldp+94534,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_15) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94535,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_15))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94536,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_hor_r_man_15) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_4_io_in_ver_r_man_15) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94537,((0x3fU & ((IData)(vlTOPp->io_in_flag)
                                                 ? 
                                                ((0x3fU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_5.__PVT__adder__DOT__addition))
                                                  ? 0x3fU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_5.__PVT__adder__DOT__addition))
                                                 : 
                                                ((0xfU 
                                                  < (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_5.__PVT__adder__DOT__addition))
                                                  ? 0xfU
                                                  : (IData)(vlSymsp->TOP__SystolicArray_HBFP_forTesting__DOT__pes_12_5.__PVT__adder__DOT__addition))))),6);
        tracep->fullCData(oldp+94538,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_0)))),4);
        tracep->fullCData(oldp+94539,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_0))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_0)))),4);
        tracep->fullCData(oldp+94540,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94541,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+94542,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_0))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94543,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_0))
                                        : 0U)),4);
        tracep->fullCData(oldp+94544,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_0) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94545,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_0))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94546,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_0) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_0) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94547,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_1)))),4);
        tracep->fullCData(oldp+94548,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_1))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_1)))),4);
        tracep->fullCData(oldp+94549,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94550,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+94551,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_1))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94552,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_1))
                                        : 0U)),4);
        tracep->fullCData(oldp+94553,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_1) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94554,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_1))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94555,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_1) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_1) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94556,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_2)))),4);
        tracep->fullCData(oldp+94557,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_2))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_2)))),4);
        tracep->fullCData(oldp+94558,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94559,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+94560,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_2))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94561,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_2))
                                        : 0U)),4);
        tracep->fullCData(oldp+94562,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_2) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94563,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_2))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94564,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_2) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_2) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94565,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_3)))),4);
        tracep->fullCData(oldp+94566,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_3))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_3)))),4);
        tracep->fullCData(oldp+94567,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94568,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+94569,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_3))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94570,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_3))
                                        : 0U)),4);
        tracep->fullCData(oldp+94571,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_3) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94572,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_3))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94573,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_3) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_3) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94574,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_4)))),4);
        tracep->fullCData(oldp+94575,((0xfU & ((IData)(vlTOPp->io_in_flag)
                                                ? (0xfU 
                                                   & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_4))
                                                : (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_4)))),4);
        tracep->fullCData(oldp+94576,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94577,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+94578,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (0xfU 
                                                    & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_4))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94579,(((IData)(vlTOPp->io_in_flag)
                                        ? (0xfU & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_4))
                                        : 0U)),4);
        tracep->fullCData(oldp+94580,(((IData)(vlTOPp->io_in_flag)
                                        ? (3U & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_4) 
                                                 >> 4U))
                                        : 0U)),4);
        tracep->fullCData(oldp+94581,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (0xfU 
                                                  & (IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_4))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
        tracep->fullCData(oldp+94582,((0xffU & (((IData)(vlTOPp->io_in_flag)
                                                  ? 
                                                 (3U 
                                                  & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_hor_r_man_4) 
                                                     >> 4U))
                                                  : 0U) 
                                                * ((IData)(vlTOPp->io_in_flag)
                                                    ? 
                                                   (3U 
                                                    & ((IData)(vlTOPp->SystolicArray_HBFP_forTesting__DOT__pes_12_5_io_in_ver_r_man_4) 
                                                       >> 4U))
                                                    : 0U)))),8);
    }
}
