// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

void Vtb___024root___eval_initial__TOP__Vtiming__1__44(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__44\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i;
    __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i = 0;
    CData/*7:0*/ __Vfunc_tb__DOT__mode_suffix__239__Vfuncout;
    __Vfunc_tb__DOT__mode_suffix__239__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__mode_suffix__239__mode_i;
    __Vfunc_tb__DOT__mode_suffix__239__mode_i = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__241__lane;
    __Vfunc_tb__DOT__load_lane__241__lane = 0;
    // Body
    __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i, 
                      (vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg.size() 
                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg_idx))) {
        vlSelfRef.tb__DOT____Vlvbound_h54bcd3e1__0 
            = (((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i))
                 ? vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
                [(0xffU & __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i)]
                 : 0U) ^ vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg.at(
                                                                                (vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg_idx 
                                                                                + __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i)));
        if (VL_LIKELY(((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                     & __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i)] 
                = vlSelfRef.tb__DOT____Vlvbound_h54bcd3e1__0;
        }
        __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i 
            = ((IData)(1U) + __Vtask_tb__DOT__sponge_reference__228__unnamedblk19__DOT__i);
    }
    vlSelfRef.tb__DOT____Vlvbound_h5a85157f__0 = ((
                                                   (0xc7U 
                                                    >= 
                                                    (0xffU 
                                                     & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg.size() 
                                                        - vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg_idx)))
                                                    ? 
                                                   vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg.size() 
                                                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg_idx))]
                                                    : 0U) 
                                                  ^ 
                                                  ([&]() {
                __Vfunc_tb__DOT__mode_suffix__239__mode_i 
                    = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__mode_i;
                __Vfunc_tb__DOT__mode_suffix__239__Vfuncout 
                    = (((((4U == __Vfunc_tb__DOT__mode_suffix__239__mode_i) 
                          || (5U == __Vfunc_tb__DOT__mode_suffix__239__mode_i)) 
                         || (6U == __Vfunc_tb__DOT__mode_suffix__239__mode_i)) 
                        || (7U == __Vfunc_tb__DOT__mode_suffix__239__mode_i))
                        ? 0x1fU : 6U);
            }(), (IData)(__Vfunc_tb__DOT__mode_suffix__239__Vfuncout)));
    if (VL_LIKELY(((0xc7U >= (0xffU & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg.size() 
                                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg_idx)))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg.size() 
                                                                    - vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__msg_idx))] 
            = vlSelfRef.tb__DOT____Vlvbound_h5a85157f__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_hbe8357a8__0 = (0x80U 
                                                  ^ 
                                                  ((0xc7U 
                                                    >= 
                                                    (0xffU 
                                                     & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__rate 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__rate 
                                                       - (IData)(1U)))]
                                                    : 0U));
    if (VL_LIKELY(((0xc7U >= (0xffU & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__rate 
                                       - (IData)(1U))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__rate 
                                                                    - (IData)(1U)))] 
            = vlSelfRef.tb__DOT____Vlvbound_hbe8357a8__0;
    }
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__round_offset_i 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__round_offset_i;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__rounds_i 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__rounds_i;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 0U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 0U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 0U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp3] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 0U;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp4] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 0U;
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp5] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 1U;
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp6] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 1U;
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp7] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 1U;
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp8] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 1U;
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp9] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 1U;
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp10] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 2U;
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp11] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 2U;
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x53U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp12] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__45(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__45\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__241__lane;
    __Vfunc_tb__DOT__load_lane__241__lane = 0;
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x54U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 2U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 2U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp3] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 2U;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp4] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 3U;
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp5] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 3U;
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp6] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 3U;
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp7] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 3U;
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp8] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 3U;
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp9] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 4U;
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp10] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 4U;
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp11] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 4U;
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0xc2U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp12] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__46(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__46\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__round;
    __Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__round = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
    __Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx = 0;
    VlUnpacked<VlUnpacked<QData/*63:0*/, 5>, 5> __Vtask_tb__DOT__keccak_p1600__240__b;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            __Vtask_tb__DOT__keccak_p1600__240__b[__Vi0][__Vi1] = 0;
        }
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__240__c;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__240__c[__Vi0] = 0;
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__240__d;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__240__d[__Vi0] = 0;
    }
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__241__lane;
    __Vfunc_tb__DOT__load_lane__241__lane = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__242__Vfuncout;
    __Vfunc_tb__DOT__rol64__242__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__242__value;
    __Vfunc_tb__DOT__rol64__242__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__242__sh;
    __Vfunc_tb__DOT__rol64__242__sh = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__243__Vfuncout;
    __Vfunc_tb__DOT__rol64__243__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__243__value;
    __Vfunc_tb__DOT__rol64__243__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__243__sh;
    __Vfunc_tb__DOT__rol64__243__sh = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__244__x;
    __Vfunc_tb__DOT__rho_offset__244__x = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__244__y;
    __Vfunc_tb__DOT__rho_offset__244__y = 0;
    QData/*63:0*/ __Vfunc_rc__245__Vfuncout;
    __Vfunc_rc__245__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rc__245__round;
    __Vfunc_rc__245__round = 0;
    QData/*63:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[0xc3U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
        [0xc3U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[0xc4U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
        [0xc4U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[0xc5U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
        [0xc5U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[0xc6U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
        [0xc6U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[0xc7U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
        [0xc7U];
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 4U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x = 4U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__241__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffff00ULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | (IData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                [
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))]
                                                                 : 0U))));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffff00ffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 8U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffff00ffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x10U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffff00ffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x18U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffff00ffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x20U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffff00ffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x28U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xff00ffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x30U));
    __Vfunc_tb__DOT__load_lane__241__lane = ((0xffffffffffffffULL 
                                              & __Vfunc_tb__DOT__load_lane__241__lane) 
                                             | ((QData)((IData)(
                                                                ((0xc7U 
                                                                  >= 
                                                                  (0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y)))))
                                                                  ? 
                                                                 vlSelfRef.__Vfunc_tb__DOT__load_lane__241__state
                                                                 [
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__241__y))))]
                                                                  : 0U))) 
                                                << 0x38U));
    __Vfunc_tb__DOT__load_lane__241__Vfuncout = __Vfunc_tb__DOT__load_lane__241__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__241__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    __Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__round = 0U;
    while (VL_LTS_III(32, __Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__round, vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__rounds_i)) {
        __Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx 
            = (__Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__round 
               + vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__round_offset_i);
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                  [0U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                  [0U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                 [0U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                [0U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [0U][4U]);
        __Vtask_tb__DOT__keccak_p1600__240__c[0U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                  [1U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                  [1U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                 [1U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                [1U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [1U][4U]);
        __Vtask_tb__DOT__keccak_p1600__240__c[1U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                  [2U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                  [2U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                 [2U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                [2U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [2U][4U]);
        __Vtask_tb__DOT__keccak_p1600__240__c[2U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                  [3U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                  [3U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                 [3U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                [3U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [3U][4U]);
        __Vtask_tb__DOT__keccak_p1600__240__c[3U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                  [4U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                  [4U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                 [4U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                [4U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [4U][4U]);
        __Vtask_tb__DOT__keccak_p1600__240__c[4U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__c
               [4U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__242__sh = 1U;
                    __Vfunc_tb__DOT__rol64__242__value 
                        = __Vtask_tb__DOT__keccak_p1600__240__c
                        [1U];
                    __Vfunc_tb__DOT__rol64__242__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__242__sh)
                            ? __Vfunc_tb__DOT__rol64__242__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__242__value, __Vfunc_tb__DOT__rol64__242__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__242__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__242__sh))));
                }(), __Vfunc_tb__DOT__rol64__242__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__240__d[0U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__c
               [0U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__242__sh = 1U;
                    __Vfunc_tb__DOT__rol64__242__value 
                        = __Vtask_tb__DOT__keccak_p1600__240__c
                        [2U];
                    __Vfunc_tb__DOT__rol64__242__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__242__sh)
                            ? __Vfunc_tb__DOT__rol64__242__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__242__value, __Vfunc_tb__DOT__rol64__242__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__242__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__242__sh))));
                }(), __Vfunc_tb__DOT__rol64__242__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__240__d[1U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__c
               [1U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__242__sh = 1U;
                    __Vfunc_tb__DOT__rol64__242__value 
                        = __Vtask_tb__DOT__keccak_p1600__240__c
                        [3U];
                    __Vfunc_tb__DOT__rol64__242__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__242__sh)
                            ? __Vfunc_tb__DOT__rol64__242__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__242__value, __Vfunc_tb__DOT__rol64__242__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__242__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__242__sh))));
                }(), __Vfunc_tb__DOT__rol64__242__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__240__d[2U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__c
               [2U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__242__sh = 1U;
                    __Vfunc_tb__DOT__rol64__242__value 
                        = __Vtask_tb__DOT__keccak_p1600__240__c
                        [4U];
                    __Vfunc_tb__DOT__rol64__242__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__242__sh)
                            ? __Vfunc_tb__DOT__rol64__242__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__242__value, __Vfunc_tb__DOT__rol64__242__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__242__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__242__sh))));
                }(), __Vfunc_tb__DOT__rol64__242__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__240__d[3U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__c
               [3U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__242__sh = 1U;
                    __Vfunc_tb__DOT__rol64__242__value 
                        = __Vtask_tb__DOT__keccak_p1600__240__c
                        [0U];
                    __Vfunc_tb__DOT__rol64__242__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__242__sh)
                            ? __Vfunc_tb__DOT__rol64__242__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__242__value, __Vfunc_tb__DOT__rol64__242__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__242__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__242__sh))));
                }(), __Vfunc_tb__DOT__rol64__242__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__240__d[4U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [0U][0U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [0U][1U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [0U][2U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [0U][3U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [0U][4U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [1U][0U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [1U][1U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [1U][2U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [1U][3U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [1U][4U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [2U][0U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [2U][1U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [2U][2U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [2U][3U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [2U][4U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [3U][0U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [3U][1U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [3U][2U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [3U][3U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [3U][4U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [4U][0U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [4U][1U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [4U][2U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [4U][3U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
               [4U][4U] ^ __Vtask_tb__DOT__keccak_p1600__240__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 0U;
        __Vfunc_tb__DOT__rho_offset__244__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel708;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel708;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel708;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel708;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel708;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel708;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel708;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel708;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel708;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel708;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel708;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel708;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel708;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel708;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel708;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel708;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel708;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel708;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel708;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel708;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel708;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel708;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel708;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel708;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel708;
            }
            __Vlabel708: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [0U][0U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 1U;
        __Vfunc_tb__DOT__rho_offset__244__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel709;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel709;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel709;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel709;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel709;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel709;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel709;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel709;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel709;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel709;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel709;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel709;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel709;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel709;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel709;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel709;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel709;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel709;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel709;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel709;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel709;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel709;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel709;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel709;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel709;
            }
            __Vlabel709: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [0U][1U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 2U;
        __Vfunc_tb__DOT__rho_offset__244__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel710;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel710;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel710;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel710;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel710;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel710;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel710;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel710;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel710;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel710;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel710;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel710;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel710;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel710;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel710;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel710;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel710;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel710;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel710;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel710;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel710;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel710;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel710;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel710;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel710;
            }
            __Vlabel710: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [0U][2U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 3U;
        __Vfunc_tb__DOT__rho_offset__244__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel711;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel711;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel711;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel711;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel711;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel711;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel711;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel711;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel711;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel711;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel711;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel711;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel711;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel711;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel711;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel711;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel711;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel711;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel711;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel711;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel711;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel711;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel711;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel711;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel711;
            }
            __Vlabel711: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [0U][3U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 4U;
        __Vfunc_tb__DOT__rho_offset__244__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel712;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel712;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel712;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel712;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel712;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel712;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel712;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel712;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel712;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel712;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel712;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel712;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel712;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel712;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel712;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel712;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel712;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel712;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel712;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel712;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel712;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel712;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel712;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel712;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel712;
            }
            __Vlabel712: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [0U][4U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 0U;
        __Vfunc_tb__DOT__rho_offset__244__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel713;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel713;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel713;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel713;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel713;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel713;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel713;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel713;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel713;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel713;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel713;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel713;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel713;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel713;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel713;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel713;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel713;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel713;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel713;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel713;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel713;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel713;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel713;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel713;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel713;
            }
            __Vlabel713: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [1U][0U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 1U;
        __Vfunc_tb__DOT__rho_offset__244__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel714;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel714;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel714;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel714;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel714;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel714;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel714;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel714;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel714;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel714;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel714;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel714;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel714;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel714;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel714;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel714;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel714;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel714;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel714;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel714;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel714;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel714;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel714;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel714;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel714;
            }
            __Vlabel714: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [1U][1U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 2U;
        __Vfunc_tb__DOT__rho_offset__244__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel715;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel715;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel715;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel715;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel715;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel715;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel715;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel715;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel715;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel715;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel715;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel715;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel715;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel715;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel715;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel715;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel715;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel715;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel715;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel715;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel715;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel715;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel715;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel715;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel715;
            }
            __Vlabel715: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [1U][2U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 3U;
        __Vfunc_tb__DOT__rho_offset__244__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel716;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel716;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel716;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel716;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel716;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel716;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel716;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel716;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel716;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel716;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel716;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel716;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel716;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel716;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel716;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel716;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel716;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel716;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel716;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel716;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel716;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel716;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel716;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel716;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel716;
            }
            __Vlabel716: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [1U][3U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 4U;
        __Vfunc_tb__DOT__rho_offset__244__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel717;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel717;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel717;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel717;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel717;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel717;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel717;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel717;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel717;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel717;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel717;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel717;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel717;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel717;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel717;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel717;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel717;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel717;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel717;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel717;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel717;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel717;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel717;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel717;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel717;
            }
            __Vlabel717: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [1U][4U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 0U;
        __Vfunc_tb__DOT__rho_offset__244__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel718;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel718;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel718;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel718;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel718;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel718;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel718;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel718;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel718;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel718;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel718;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel718;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel718;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel718;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel718;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel718;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel718;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel718;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel718;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel718;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel718;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel718;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel718;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel718;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel718;
            }
            __Vlabel718: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [2U][0U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 1U;
        __Vfunc_tb__DOT__rho_offset__244__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel719;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel719;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel719;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel719;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel719;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel719;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel719;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel719;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel719;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel719;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel719;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel719;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel719;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel719;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel719;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel719;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel719;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel719;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel719;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel719;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel719;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel719;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel719;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel719;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel719;
            }
            __Vlabel719: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [2U][1U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 2U;
        __Vfunc_tb__DOT__rho_offset__244__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel720;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel720;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel720;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel720;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel720;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel720;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel720;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel720;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel720;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel720;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel720;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel720;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel720;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel720;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel720;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel720;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel720;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel720;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel720;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel720;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel720;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel720;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel720;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel720;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel720;
            }
            __Vlabel720: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [2U][2U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 3U;
        __Vfunc_tb__DOT__rho_offset__244__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel721;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel721;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel721;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel721;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel721;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel721;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel721;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel721;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel721;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel721;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel721;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel721;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel721;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel721;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel721;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel721;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel721;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel721;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel721;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel721;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel721;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel721;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel721;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel721;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel721;
            }
            __Vlabel721: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [2U][3U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 4U;
        __Vfunc_tb__DOT__rho_offset__244__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel722;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel722;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel722;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel722;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel722;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel722;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel722;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel722;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel722;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel722;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel722;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel722;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel722;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel722;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel722;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel722;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel722;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel722;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel722;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel722;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel722;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel722;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel722;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel722;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel722;
            }
            __Vlabel722: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [2U][4U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 0U;
        __Vfunc_tb__DOT__rho_offset__244__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel723;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel723;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel723;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel723;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel723;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel723;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel723;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel723;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel723;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel723;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel723;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel723;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel723;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel723;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel723;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel723;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel723;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel723;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel723;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel723;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel723;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel723;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel723;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel723;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel723;
            }
            __Vlabel723: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [3U][0U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 1U;
        __Vfunc_tb__DOT__rho_offset__244__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel724;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel724;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel724;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel724;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel724;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel724;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel724;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel724;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel724;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel724;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel724;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel724;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel724;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel724;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel724;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel724;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel724;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel724;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel724;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel724;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel724;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel724;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel724;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel724;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel724;
            }
            __Vlabel724: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [3U][1U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 2U;
        __Vfunc_tb__DOT__rho_offset__244__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel725;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel725;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel725;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel725;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel725;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel725;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel725;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel725;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel725;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel725;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel725;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel725;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel725;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel725;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel725;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel725;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel725;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel725;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel725;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel725;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel725;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel725;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel725;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel725;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel725;
            }
            __Vlabel725: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [3U][2U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 3U;
        __Vfunc_tb__DOT__rho_offset__244__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel726;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel726;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel726;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel726;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel726;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel726;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel726;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel726;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel726;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel726;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel726;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel726;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel726;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel726;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel726;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel726;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel726;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel726;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel726;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel726;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel726;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel726;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel726;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel726;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel726;
            }
            __Vlabel726: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [3U][3U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 4U;
        __Vfunc_tb__DOT__rho_offset__244__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel727;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel727;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel727;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel727;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel727;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel727;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel727;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel727;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel727;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel727;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel727;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel727;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel727;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel727;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel727;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel727;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel727;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel727;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel727;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel727;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel727;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel727;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel727;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel727;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel727;
            }
            __Vlabel727: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [3U][4U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 0U;
        __Vfunc_tb__DOT__rho_offset__244__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel728;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel728;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel728;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel728;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel728;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel728;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel728;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel728;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel728;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel728;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel728;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel728;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel728;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel728;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel728;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel728;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel728;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel728;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel728;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel728;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel728;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel728;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel728;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel728;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel728;
            }
            __Vlabel728: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [4U][0U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 1U;
        __Vfunc_tb__DOT__rho_offset__244__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel729;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel729;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel729;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel729;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel729;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel729;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel729;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel729;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel729;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel729;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel729;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel729;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel729;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel729;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel729;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel729;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel729;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel729;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel729;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel729;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel729;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel729;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel729;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel729;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel729;
            }
            __Vlabel729: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [4U][1U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 2U;
        __Vfunc_tb__DOT__rho_offset__244__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel730;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel730;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel730;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel730;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel730;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel730;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel730;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel730;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel730;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel730;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel730;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel730;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel730;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel730;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel730;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel730;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel730;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel730;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel730;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel730;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel730;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel730;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel730;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel730;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel730;
            }
            __Vlabel730: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [4U][2U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 3U;
        __Vfunc_tb__DOT__rho_offset__244__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel731;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel731;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel731;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel731;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel731;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel731;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel731;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel731;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel731;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel731;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel731;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel731;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel731;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel731;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel731;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel731;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel731;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel731;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel731;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel731;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel731;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel731;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel731;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel731;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel731;
            }
            __Vlabel731: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [4U][3U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__244__y = 4U;
        __Vfunc_tb__DOT__rho_offset__244__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0U;
                    goto __Vlabel732;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x24U;
                    goto __Vlabel732;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 3U;
                    goto __Vlabel732;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x29U;
                    goto __Vlabel732;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x12U;
                    goto __Vlabel732;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 1U;
                    goto __Vlabel732;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2cU;
                    goto __Vlabel732;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xaU;
                    goto __Vlabel732;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2dU;
                    goto __Vlabel732;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 2U;
                    goto __Vlabel732;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3eU;
                    goto __Vlabel732;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 6U;
                    goto __Vlabel732;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x2bU;
                    goto __Vlabel732;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xfU;
                    goto __Vlabel732;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x3dU;
                    goto __Vlabel732;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1cU;
                    goto __Vlabel732;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x37U;
                    goto __Vlabel732;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x19U;
                    goto __Vlabel732;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x15U;
                    goto __Vlabel732;
                } else {
                    __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x38U;
                    goto __Vlabel732;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x1bU;
                goto __Vlabel732;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x14U;
                goto __Vlabel732;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0x27U;
                goto __Vlabel732;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__244__y)) {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 8U;
                goto __Vlabel732;
            } else {
                __Vfunc_tb__DOT__rho_offset__244__Vfuncout = 0xeU;
                goto __Vlabel732;
            }
            __Vlabel732: ;
        }
        __Vfunc_tb__DOT__rol64__243__sh = __Vfunc_tb__DOT__rho_offset__244__Vfuncout;
        __Vfunc_tb__DOT__rol64__243__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
            [4U][4U];
        __Vfunc_tb__DOT__rol64__243__Vfuncout = ((0U 
                                                  == __Vfunc_tb__DOT__rol64__243__sh)
                                                  ? __Vfunc_tb__DOT__rol64__243__value
                                                  : 
                                                 (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, __Vfunc_tb__DOT__rol64__243__sh) 
                                                  | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__243__value, 
                                                                  ((IData)(0x40U) 
                                                                   - __Vfunc_tb__DOT__rol64__243__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__243__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__240__b[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [0U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [1U][0U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [2U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [0U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [1U][1U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [2U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [0U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [1U][2U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [2U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [0U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [1U][3U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [2U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [0U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [1U][4U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [2U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [1U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [2U][0U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [3U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [1U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [2U][1U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [3U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [1U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [2U][2U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [3U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [1U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [2U][3U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [3U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [1U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [2U][4U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [3U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [2U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [3U][0U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [4U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [2U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [3U][1U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [4U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [2U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [3U][2U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [4U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [2U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [3U][3U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [4U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [2U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [3U][4U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [4U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [3U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [4U][0U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [0U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [3U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [4U][1U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [0U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [3U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [4U][2U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [0U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [3U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [4U][3U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [0U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [3U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [4U][4U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [0U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [4U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [0U][0U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [1U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [4U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [0U][1U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [1U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [4U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [0U][2U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [1U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [4U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [0U][3U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [1U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__240__b
               [4U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__240__b
                            [0U][4U]) & __Vtask_tb__DOT__keccak_p1600__240__b
                           [1U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        __Vtemp_1 = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
                     [0U][0U] ^ ([&]() {
                    __Vfunc_rc__245__round = __Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
                    {
                        if (((((((((0U == __Vfunc_rc__245__round) 
                                   | (1U == __Vfunc_rc__245__round)) 
                                  | (2U == __Vfunc_rc__245__round)) 
                                 | (3U == __Vfunc_rc__245__round)) 
                                | (4U == __Vfunc_rc__245__round)) 
                               | (5U == __Vfunc_rc__245__round)) 
                              | (6U == __Vfunc_rc__245__round)) 
                             | (7U == __Vfunc_rc__245__round))) {
                            if ((0U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 1ULL;
                                goto __Vlabel733;
                            } else if ((1U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8082ULL;
                                goto __Vlabel733;
                            } else if ((2U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x800000000000808aULL;
                                goto __Vlabel733;
                            } else if ((3U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8000000080008000ULL;
                                goto __Vlabel733;
                            } else if ((4U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x808bULL;
                                goto __Vlabel733;
                            } else if ((5U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x80000001ULL;
                                goto __Vlabel733;
                            } else if ((6U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8000000080008081ULL;
                                goto __Vlabel733;
                            } else {
                                __Vfunc_rc__245__Vfuncout = 0x8000000000008009ULL;
                                goto __Vlabel733;
                            }
                        } else if (((((((((8U == __Vfunc_rc__245__round) 
                                          | (9U == __Vfunc_rc__245__round)) 
                                         | (0xaU == __Vfunc_rc__245__round)) 
                                        | (0xbU == __Vfunc_rc__245__round)) 
                                       | (0xcU == __Vfunc_rc__245__round)) 
                                      | (0xdU == __Vfunc_rc__245__round)) 
                                     | (0xeU == __Vfunc_rc__245__round)) 
                                    | (0xfU == __Vfunc_rc__245__round))) {
                            if ((8U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8aULL;
                                goto __Vlabel733;
                            } else if ((9U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x88ULL;
                                goto __Vlabel733;
                            } else if ((0xaU == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x80008009ULL;
                                goto __Vlabel733;
                            } else if ((0xbU == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8000000aULL;
                                goto __Vlabel733;
                            } else if ((0xcU == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8000808bULL;
                                goto __Vlabel733;
                            } else if ((0xdU == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x800000000000008bULL;
                                goto __Vlabel733;
                            } else if ((0xeU == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8000000000008089ULL;
                                goto __Vlabel733;
                            } else {
                                __Vfunc_rc__245__Vfuncout = 0x8000000000008003ULL;
                                goto __Vlabel733;
                            }
                        } else if (((((((((0x10U == __Vfunc_rc__245__round) 
                                          | (0x11U 
                                             == __Vfunc_rc__245__round)) 
                                         | (0x12U == __Vfunc_rc__245__round)) 
                                        | (0x13U == __Vfunc_rc__245__round)) 
                                       | (0x14U == __Vfunc_rc__245__round)) 
                                      | (0x15U == __Vfunc_rc__245__round)) 
                                     | (0x16U == __Vfunc_rc__245__round)) 
                                    | (0x17U == __Vfunc_rc__245__round))) {
                            if ((0x10U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8000000000008002ULL;
                                goto __Vlabel733;
                            } else if ((0x11U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8000000000000080ULL;
                                goto __Vlabel733;
                            } else if ((0x12U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x800aULL;
                                goto __Vlabel733;
                            } else if ((0x13U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x800000008000000aULL;
                                goto __Vlabel733;
                            } else if ((0x14U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8000000080008081ULL;
                                goto __Vlabel733;
                            } else if ((0x15U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x8000000000008080ULL;
                                goto __Vlabel733;
                            } else if ((0x16U == __Vfunc_rc__245__round)) {
                                __Vfunc_rc__245__Vfuncout = 0x80000001ULL;
                                goto __Vlabel733;
                            } else {
                                __Vfunc_rc__245__Vfuncout = 0x8000000080008008ULL;
                                goto __Vlabel733;
                            }
                        } else {
                            __Vfunc_rc__245__Vfuncout = 0ULL;
                            goto __Vlabel733;
                        }
                        __Vlabel733: ;
                    }
                }(), __Vfunc_rc__245__Vfuncout));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a[0U][0U] 
            = __Vtemp_1;
        __Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__round 
            = ((IData)(1U) + __Vtask_tb__DOT__keccak_p1600__240__unnamedblk5__DOT__round);
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [0U][0U];
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [0U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [0U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [0U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [0U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [1U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [1U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [1U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [1U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [1U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [2U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [2U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [2U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [2U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [2U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [3U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [3U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [3U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [3U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [3U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [4U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [4U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [4U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x38U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__240__a
        [4U][3U];
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__246__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__228__state[(0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__246__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__246__lane 
                                                             >> 0x10U)));
}
